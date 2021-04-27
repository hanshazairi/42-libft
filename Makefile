NAME = libft.a
SOURCES = $(filter-out main.c, $(wildcard *.c))
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCES)
	ar rc $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
