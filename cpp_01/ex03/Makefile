CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

# colors
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
RESET = \033[0m


NAME = weapon

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)Compilation is complete! the Executable is ready! $(NAME)$(RESET)"

%.o: %.cpp  HumanA.hpp HumanB.hpp Weapon.hpp
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
.PHONY: all clean fclean re