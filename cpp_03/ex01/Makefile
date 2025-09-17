CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

#colors
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
RESET = \033[0m

SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = ScavTrap

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)Compilation is complete! the Executable is ready! $(NAME)$(RESET)"

%.o: %.cpp headers/ClapTrap.hpp headers/ScavTrap.hpp
	@echo "$(YELLOW)Compiling  to object file $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJS)
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Executable removed!$(RESET)"
re: fclean all
	@echo "$(BLUE)Recompilation complete!$(RESET)"
.PHONY: all clean fclean rebuild