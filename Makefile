# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panther <panther@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 11:07:10 by annabrag          #+#    #+#              #
#    Updated: 2023/05/09 18:27:12 by panther          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \

BONUS = ft_lstmap.c \
		ft_lstiter.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstsize.c \
		ft_lstnew.c 

OBJECTS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

NAME = libft.a

INCS = libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBC = ar -rcs

LIBR = ranlib

.c.o:
		$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@
		
$(NAME): $(OBJECTS)
		 $(LIBC) $(NAME) $(OBJECTS)
				 $(LIBR) $(NAME)

bonus: $(BONUS_OBJS)
			$(LIBC) $(NAME) $(BONUS_OBJS)
			$(LIBR) $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
