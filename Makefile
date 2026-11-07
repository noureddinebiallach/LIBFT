NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJC = $(SRC:.c=.o)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<  -o $@

all: $(NAME)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC)

clean:
	rm -f $(OBJC) 

fclean: clean
	rm -f $(NAME)

re: fclean all



.PHONY: all clean fclean re