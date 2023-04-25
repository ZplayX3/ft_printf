NAME = libftprintf.a
SRCS = ft_hub.c \
	ft_printf.c \
	ft_printc.c \
	ft_prints.c \
	ft_printp.c \
	ft_printd.c \
	ft_printi.c \
	ft_printu.c \
	ft_printx.c \
	ft_print_caps_x.c \
	ft_print_percent.c \

OBJECTS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes -c

LIBPATH = libft/

all : $(NAME) $(OBJECTS)

$(NAME): $(OBJECTS)
	make -C $(LIBPATH)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)
	make -C $(LIBPATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean

re: fclean all

.PHONY: all clean fclean re.
