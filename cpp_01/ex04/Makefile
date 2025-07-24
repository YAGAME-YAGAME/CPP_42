CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp utils.cpp getLine.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = sed

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Sed.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
rebuild: fclean all
.PHONY: all clean fclean rebuild