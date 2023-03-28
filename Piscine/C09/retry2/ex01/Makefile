SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME = libft.a

HEADER = includes/

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	cc -Wall -Wextra -Werror -I $(HEADER) -c $< -o ${<:.c=.o}
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
