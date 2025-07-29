NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_memset.c ft_bzero.c ft_isascii.c ft_isprint.c
ft_memmove.c ft_strlen.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_toupper.c 
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
