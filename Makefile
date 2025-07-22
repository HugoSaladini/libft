NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJS = $(SRCS:.c=.o)

TEST = test
TEST_SRC = main.c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(NAME) $(TEST_SRC)
	$(CC) $(FLAGS) $(TEST_SRC) $(NAME) -o $(TEST)
	./$(TEST)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all
