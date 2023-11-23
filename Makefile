# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 11:07:10 by annabrag          #+#    #+#              #
#    Updated: 2023/11/23 18:17:16 by annabrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################## BASICS ##############################

NAME		= libft.a
INC		= include/
CC		= clang
CFLAGS		= -Wall -Wextra -Werror
FSANITIZE	= -fsanitize=address -g3
LIBC		= ar -rcs
RM		= rm -rf


############################# SOURCES #############################

FT_FD_DIR	= 	ft_fd/
FT_FD_FILES	= 	ft_putchar_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_putstr_fd

FT_IS_DIR 	= 	ft_is/
FT_IS_FILES	= 	ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint

FT_MEM_DIR	=	ft_mem/
FT_MEM_FILES	=	ft_memset \
			ft_memcpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp
				
FT_STR_DIR	=	ft_str/
FT_STR_FILES	=	ft_strlen \
			ft_bzero \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_strnstr \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_strmapi \
			ft_striteri

FT_TO_DIR	=	ft_to/
FT_TO_FILES	=	ft_tolower \
			ft_toupper \
			ft_itoa \
			ft_atoi

FT_LST_DIR	=	ft_lst/
FT_LST_FILES	=	ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap

FT_PRINTF_DIR	=	ft_printf/
FT_PRINTF_FILES	=	ft_printf \
			ft_printf_unsigned_int \
			ft_printchar \
			ft_printhex \
			ft_printnbr \
			ft_printptr \
			ft_printstr

GNL_DIR		=	get_next_line/
GNL_FILES	=	get_next_line \
			get_next_line_utils


####################### COMBINE DIRECTORIES AND FILES #######################

SRC_DIR		= src/

SRC_NAMES	= $(addprefix $(FT_FD_DIR), $(addsuffix .c, $(FT_FD_FILES))) \
			$(addprefix $(FT_IS_DIR), $(addsuffix .c, $(FT_IS_FILES))) \
			$(addprefix $(FT_MEM_DIR), $(addsuffix .c, $(FT_MEM_FILES))) \
			$(addprefix $(FT_STR_DIR), $(addsuffix .c, $(FT_STR_FILES))) \
			$(addprefix $(FT_TO_DIR), $(addsuffix .c, $(FT_TO_FILES))) \
			$(addprefix $(FT_LST_DIR), $(addsuffix .c, $(FT_LST_FILES))) \
			$(addprefix $(FT_PRINTF_DIR), $(addsuffix .c, $(FT_PRINTF_FILES))) \
			$(addprefix $(GNL_DIR), $(addsuffix .c, $(GNL_FILES)))

OBJ_DIR		= obj/

OBJ_NAMES	= $(SRC_NAMES:.c=.o)

OBJ_FOLDERS	= $(addprefix $(OBJ_DIR), $(FT_FD_DIR) \
                	$(FT_IS_DIR) \
			$(FT_MEM_DIR) \
			$(FT_STR_DIR) \
                        $(FT_TO_DIR) \
			$(FT_LST_DIR) \
			$(FT_PRINTF_DIR) \
                	$(GNL_DIR))

OBJ		= $(addprefix $(OBJ_DIR), $(OBJ_NAMES))


################################### RULES ###################################

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			@mkdir -p $(OBJ_DIR)$(SRC_DIR)
#			@echo "$(ITAL)$(BLUE)Compiling: $< $(RESET)"
			@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

# link .o files to the library
$(NAME):	$(OBJ)
			@$(LIBC) $(NAME) $(OBJ)
			@echo "$(BRIGHT_PURPLE)Libft successfully compiled!$(RESET)"

all:		$(NAME)

# bonus:		$(BONUS_OBJ)
# 			@$(LIBC) $(NAME) $(BONUS_OBJ)
# 			@echo "$(BRIGHT_PURPLE)Libft bonus successfully compiled!$(RESET)"

san:		$(FSANITIZE)

clean:
			@$(RM) $(OBJ_DIR)
			@echo "$(PINK)[LIBFT]:\tobject files : cleaned! $(RESET)🧹\n"

fclean: 	clean
			@$(RM) $(NAME)
			@find . -name ".DS_Store" -delete
			@echo "$(PURPLE)[LIBFT]:\texec files : cleaned! $(RESET)🧹\n"

re:		fclean all
			@echo "$(CYAN)Cleaning and rebuilding done! $(RESET)✨\n"

norm:
			@clear
			@norminette $(SRC) $(INC)

.PHONY:		all clean fclean re norm
