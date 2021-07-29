NAME = libft.a
SOURCES = $(filter-out $(BSOURCES), $(wildcard *.c))
BSOURCES = $(wildcard *lst*.c)
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	ar rc $(NAME) $?

%.o: %.c
	gcc -c -Wall -Wextra -Werror $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
