NAME = libft.a
SRCS = ft_hub.c

OBJECTS = $(SRCS: .c=.o)

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
