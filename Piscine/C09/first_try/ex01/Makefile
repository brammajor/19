SRC_DIR = ./srcs/

SRC =	$(SRC_DIR)ft_putchar.c \
	$(SRC_DIR)ft_swap.c \
	$(SRC_DIR)ft_putstr.c \
	$(SRC_DIR)ft_strlen.c \
	$(SRC_DIR)ft_strcmp.c 

NAME = libft.a

HEADER = ./includes/ft.h

FLAGS = -Wall -Werror -Wextra -c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(SRC)
	cc $(FLAGS) $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)
	mv $(OBJ) $(SRC_DIR)

clean:
	cd $(SRC_DIR) ; rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
