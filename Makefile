# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlachman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 16:30:37 by tlachman          #+#    #+#              #
#    Updated: 2023/05/04 16:30:39 by tlachman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_hub.c \
	ft_printf.c \
	ft_printc.c \
	ft_prints.c \
	ft_printp.c \
	ft_printd.c \
	ft_printu.c \
	ft_printx.c \
	ft_print_caps_x.c \
	ft_print_percent.c \
	libft/ft_isdigit.c \
	libft/ft_isalnum.c \
	libft/ft_isascii.c \
	libft/ft_isprint.c \
	libft/ft_strlen.c \
	libft/ft_memset.c \
	libft/ft_bzero.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_strlcpy.c \
	libft/ft_strlcat.c \
	libft/ft_toupper.c \
	libft/ft_tolower.c \
	libft/ft_strchr.c \
	libft/ft_strrchr.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_strnstr.c \
	libft/ft_atoi.c \
	libft/ft_calloc.c \
	libft/ft_strdup.c \
	libft/ft_substr.c \
	libft/ft_strjoin.c \
	libft/ft_strtrim.c \
	libft/ft_split.c \
	libft/ft_strmapi.c \
	libft/ft_striteri.c \
	libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c \
	libft/ft_itoa.c \

OBJECTS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes -c

all : $(NAME) $(OBJECTS)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re.
