CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRC_DIR = src
SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re