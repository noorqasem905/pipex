CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
ARFLAGS = rcs
SRCS = ft_toupper.c ft_tolower.c ft_isalpha.c ft_memset.c ft_bzero.c ft_atoi.c ft_isdigit.c \
	ft_strchr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	ft_strncmp.c ft_strlen.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_strnstr.c \
	ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_word_len.c ft_word_count.c \
	
SRCSB =	ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstnew.c
	
CC = @cc
RM = @rm -f

OBJS =  $(SRCS:.c=.o)
OBJSB =  $(SRCSB:.c=.o)
#creating the statico librere
all: $(NAME)
#now we compile the source files (build them and turning them into objects)
#$< means the %.c (requirements) and the $@ means the target which is %.o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	@ar $(ARFLAGS) $@ $^
bonus: $(NAME) $(OBJSB)
	$(AR) $(ARFLAGS) $(NAME) $(OBJSB)
#here we remove the object files (.o) that were created
clean:
	@rm -f $(OBJS) $(OBJSB)
#we just remove the library files here
fclean: clean
	@rm -f $(NAME)
#here we rebuild everything, by deleting and redoing all of the steps again
re: fclean all
#
.PHONY: all clean fclean re
