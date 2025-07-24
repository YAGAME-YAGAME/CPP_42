CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# colors
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
RESET = \033[0m


SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = exec

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(BLUE)Compilation complete! Executable: $(NAME)$(RESET)"

%.o: %.cpp
	@echo "$(CYAN)Compiling to object file $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaning up object files...$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)Cleaning up executable...$(RESET)"
	@rm -f $(NAME)
re: fclean all
	@echo "$(BLUE)Rebuilding $(NAME)...$(RESET)"
.PHONY: all clean fclean re