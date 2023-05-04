# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: annabrag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 11:07:10 by annabrag          #+#    #+#              #
#    Updated: 2023/05/03 17:36:48 by annabrag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_isalpha.c \
	   srcs/ft_isdigit.c \
	   srcs/ft_isalnum.c \
	   srcs/ft_isascii.c \
	   srcs/ft_isprint.c \
	   srcs/ft_strlen.c \
	   srcs/ft_memset.c \
	   srcs/ft_bzero.c \
	   srcs/ft_memcpy.c \
	   srcs/ft_memmove.c \
	   srcs/ft_strlcpy.c \
	   srcs/ft_strlcat.c \
	   srcs/ft_toupper.c \
	   srcs/ft_tolower.c \
	   srcs/ft_strchr.c \
	   srcs/ft_strrchr.c \
	   srcs/ft_strncmp.c \
	   srcs/ft_memcmp.c \
	   srcs/ft_strnstr.c \
	   srcs/ft_atoi.c \
	   srcs/ft_calloc.c \
	   srcs/ft_strdup.c

OBJECTS = $(SRCS:.c=.o)

NAME = libft.a

INCS = includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBC = ar -rcs

LIBR = ranlib

.c.o:
		$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@
		
$(NAME): $(OBJECTS)
		 gcc -o $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
