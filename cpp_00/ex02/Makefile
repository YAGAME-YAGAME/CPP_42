CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Color codes
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
BLUE = \033[34m
RESET = \033[0m

SRCS= Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = account

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BLUE)compiling...$(RESET)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)✓ Compilation successful! Executable '$(NAME)' created.$(RESET)"

%.o: %.cpp Account.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "$(YELLOW)✓ Object files removed$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "the executable file is deleted"

re: fclean all