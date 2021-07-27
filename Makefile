NAME = libft.a
SOURCES = $(filter-out $(BSOURCES), $(wildcard *.c))
BSOURCES = $(wildcard *lst*.c)
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)
GCC = gcc -c -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) $(NAME) $?

%.o: %.c
	$(GCC) $?

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
