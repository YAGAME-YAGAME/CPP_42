CC = c++
cflags = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
NAME = zombieHorde

# colors
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
RESET = \033[0m


all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	@echo "$(YELLOW)Linking object files...$(RESET)"
	@echo "$(BLUE)Creating executable...$(RESET)"
	@$(CC) $(cflags) -o $@ $^
	@echo "$(MAGENTA)Executable created: $(NAME)$(RESET)"

%.o: %.cpp Zombie.hpp
	@echo "$(YELLOW)Compiling to object file $<...$(RESET)"
	@$(CC) $(cflags) -c $< -o $@


clean:
	@echo "$(RED)Cleaning up object files...$(RESET)"
	@rm -f $(OBJ)
fclean: clean
	@echo "$(RED)Cleaning up executable...$(RESET)"
	@rm -f $(NAME)

re: fclean all
	@echo "$(GREEN)Rebuilding everything...$(RESET)"
.PHONY: all clean fclean re