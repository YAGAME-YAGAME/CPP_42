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

SRCS = src/MateriaSource.cpp \
		src/Character.cpp \
		src/AMateria.cpp \
		src/Ice.cpp \
		src/Cure.cpp \
		src/main.cpp
OBJDIR = obj
OBJS = $(SRCS:src/%.cpp=$(OBJDIR)/%.o)
NAME = materia

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@echo "$(GREEN)Compiling ...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)  _____ _____  _____  "
	@echo "$(GREEN) /  __ \  _  \|  _  |  "
	@echo "$(GREEN) | /  \/ |_| || |_| |  "
	@echo "$(GREEN) | |   |  ___|/  ___/  "
	@echo "$(GREEN) | \__/\ |   | |      "
	@echo "$(GREEN)  \____\_|   \_|       "
	@echo "$(GREEN)Compilation is complete! the Executable is ready! $(NAME)$(RESET)"

$(OBJDIR)/%.o: src/%.cpp headers/IMateriaSource.hpp headers/MateriaSource.hpp headers/ICharacter.hpp headers/Character.hpp headers/AMateria.hpp headers/Ice.hpp headers/Cure.hpp
	@echo "$(YELLOW)Compiling $< to object file $@...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Executable removed!$(RESET)"

re: fclean all
	@echo "$(BLUE)Recompilation complete!$(RESET)"

.PHONY: all clean fclean re