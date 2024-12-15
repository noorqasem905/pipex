CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = pipex
SRCS = src/pipex.c src/utils.c\

all: $(NAME)

CC = @cc
RM = @rm -f

OBJS =  $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@make -s -C libft
	@cc $(CFLAGS) $(SRCS) -o $(NAME) -Llibft -lft

clean:
	@rm -f $(OBJS)
	@make clean -s -C libft
fclean: clean
	@make fclean -s -C libft
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
