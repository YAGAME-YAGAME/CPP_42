CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS= Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = job

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)
	@echo "the object files are removed"

fclean: clean
	rm -rf $(NAME)

re: fclean all