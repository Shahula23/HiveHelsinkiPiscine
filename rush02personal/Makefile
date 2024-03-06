NAME = rush-02

SOURCES = main.c ft_atoi.c ft_cmp.c open_read_close.c ft_split.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

HEADERS= ft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	cc $(CFLAGS) -o $(NAME) $(OBJECTS) -I $(HEADERS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
