# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 11:07:10 by annabrag          #+#    #+#              #
#    Updated: 2023/11/23 15:54:58 by annabrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################## BASICS ##############################

NAME		= libft.a
INC		= include/
SRC_DIR		= src/
OBJ_DIR		= obj/
CC		= clang
CFLAGS		= -Wall -Wextra -Werror
FSANITIZE	= -fsanitize=address -g3
LIBC		= ar -rcs
RM		= rm -rf
ECHO		= echo -en


############################# SOURCES #############################

FT_FD_DIR	= 	ft_fd/
FT_FD		= 	ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c

FT_IS_DIR 	= 	ft_is/
FT_IS		= 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c

FT_MEM_DIR	=	ft_mem/
FT_MEM		=	ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c
				
FT_STR_DIR	=	ft_str/
FT_STR		=	ft_strlen.c \
			ft_bzero.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c

FT_TO_DIR	=	ft_to/
FT_TO		=	ft_tolower.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_atoi.c

FT_LST_DIR	=	ft_lst/
FT_LST		=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

FT_PRINTF_DIR	=	ft_printf/
FT_PRINTF	=	ft_printf.c \
			ft_printf_unsigned_int.c \
			ft_printchar.c \
			ft_printhex.c \
			ft_printnbr.c \
			ft_printptr.c \
			ft_printstr.c

GNL_DIR		=	get_next_line/
GNL		=	get_next_line.c \
			get_next_line_utils.c


####################### COMBINE DIRECTORIES AND FILES #######################

SRC_FILES	+= $(addprefix $(FT_FD_DIR),$(FT_FD))
SRC_FILES	+= $(addprefix $(FT_IS_DIR),$(FT_IS))
SRC_FILES	+= $(addprefix $(FT_MEM_DIR),$(FT_MEM))
SRC_FILES	+= $(addprefix $(FT_STR_DIR),$(FT_STR))
SRC_FILES	+= $(addprefix $(FT_TO_DIR),$(FT_TO))
BONUS_FILES	+= $(addprefix $(FT_LST_DIR),$(FT_LST))

SRC_FILES	+= $(addprefix $(GNL_DIR),$(GNL))
SRC_FILES	+= $(addprefix $(FT_PRINTF_DIR),$(FT_PRINTF))

# SRC 		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
# OBJ 		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
# BONUS_OBJ	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(BONUS_FILES)))

OBJ 		= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:.c=.o)))
BONUS_OBJ	= $(addprefix $(OBJ_DIR)/, $(notdir $(BONUS_FILES:.c=.o)))



# SRC		= $(filter-out $(wildcard $(SRC_DIR)/**/ft_lst*.c), $(wildcard $(SRC_DIR)/**/*.c))
# OBJ		= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

BONUS		+= $(addprefix $(FT_LST_DIR),$(FT_LST))
BONUS_OBJ	= $(addprefix $(OBJ_DIR)/, $(notdir $(BONUS:.c=.o)))


################################### RULES ###################################

# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
# 			@$(ECHO) "$(ITAL)$(BLUE)Compiling: $< $(RESET)"
# 			@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
			@$(ECHO) "$(ITAL)$(BLUE)Compiling: $< $(RESET)"
			@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

# $(OBJ_DIR):
# 		@mkdir -p $@

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

re:		fclean all
			@$(ECHO) "$(CYAN)Cleaning and rebuilding done! $(RESET)✨\n"

norm:
			@clear
			@norminette $(SRC) $(INC)

.PHONY:		all clean fclean re norm
