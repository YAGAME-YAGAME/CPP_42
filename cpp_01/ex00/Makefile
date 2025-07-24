CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)


# Color codes
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
BLUE = \033[34m
RESET = \033[0m
NAME  = zombie


all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)Compilation complete.$(RESET)"

%.o: %.cpp Zombie.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)Object files cleaned.$(RESET)"
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Executable cleaned.$(RESET)"
re: fclean all
	@echo "$(GREEN)Rebuild complete.$(RESET)"
