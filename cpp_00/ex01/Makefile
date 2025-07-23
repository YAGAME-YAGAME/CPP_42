CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp src/contact.cpp src/phonebook.cpp src/utils.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@echo "the object files are removed"
fclean: clean
	@rm -f $(NAME)
re: fclean all