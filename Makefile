# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: art3mis <art3mis@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 11:07:10 by annabrag          #+#    #+#              #
#    Updated: 2023/11/23 03:08:27 by art3mis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################## BASICS ##############################

NAME		= libft.a
INC			= include/
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= clang
CFLAGS		= -Wall -Wextra -Werror
FSANITIZE	= -fsanitize=address -g3
LIBC		= ar -rcs
RM			= rm -rf
ECHO		= echo -en


############################# SOURCES #############################

FT_FD_DIR		= 	ft_fd/
FT_FD			= 	ft_putchar_fd \
					ft_putendl_fd \
					ft_putnbr_fd \
					ft_putstr_fd

FT_IS_DIR 		= 	ft_is/
FT_IS			= 	ft_isalpha \
					ft_isdigit \
					ft_isalnum \
					ft_isascii \
					ft_isprint

FT_MEM_DIR		=	ft_mem/
FT_MEM			=	ft_memset \
					ft_memcpy \
					ft_memmove \
					ft_memchr \
					ft_memcmp
				
FT_STR_DIR		=	ft_str/
FT_STR			=	ft_strlen \
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

FT_TO_DIR		=	ft_to/
FT_TO			=	ft_tolower \
					ft_toupper \
					ft_itoa \
					ft_atoi

FT_LST_DIR		=	ft_lst/
FT_LST			=	ft_lstnew \
					ft_lstadd_front \
					ft_lstsize \
					ft_lstlast \
					ft_lstadd_back \
					ft_lstdelone \
					ft_lstclear \
					ft_lstiter \
					ft_lstmap

FT_PRINTF_DIR	=	ft_printf/
FT_PRINTF		=	ft_printf \
					ft_printf_unsigned_int \
					ft_printchar \
					ft_printhex \
					ft_printnbr \
					ft_printptr \
					ft_printstr

GNL_DIR			=	get_next_line/
GNL				=	get_next_line \
					get_next_line_utils


####################### COMBINE DIRECTORIES AND FILES #######################

SRC			= $(filter-out $(wildcard $(SRC_DIR)/**/ft_lst*.c), $(wildcard $(SRC_DIR)/**/*.c))
OBJ			= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

BONUS		+= $(addprefix $(FT_LST_DIR),$(FT_LST))
BONUS_OBJ	= $(addprefix $(OBJ_DIR)/, $(notdir $(BONUS:.c=.o)))
		

################################### RULES ###################################

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
					@$(ECHO) "$(ITAL)$(BLUE)Compiling: $< $(RESET)"
					@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

# link .o files to the library
$(NAME):	$(OBJ)
					@$(LIBC) $(NAME) $(OBJ)
					@$(ECHO) "$(BRIGHT_PURPLE)Libft successfully compiled!$(RESET)"

all:		$(NAME)

bonus:		$(BONUS_OBJ)
					@$(LIBC) $(NAME) $(BONUS_OBJ)
					@$(ECHO) "$(BRIGHT_PURPLE)Libft bonus successfully compiled!$(RESET)"

san:		$(FSANITIZE)

clean:
					@$(RM) $(OBJ_DIR)
					@$(ECHO) "$(PINK)[LIBFT]:\tobject files : cleaned! $(RESET)🧹\n"

fclean: 	clean
					@$(RM) $(NAME)
					@find . -name ".DS_Store" -delete
					@$(ECHO) "$(PURPLE)[LIBFT]:\texec files : cleaned! $(RESET)🧹\n"

re:			fclean all
					@$(ECHO) "$(CYAN)Cleaning and rebuilding done! $(RESET)✨\n"

norm:
					@clear
					@norminette $(SRC) $(INC)

.PHONY:		all clean fclean re norm
