# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 11:02:09 by brmajor           #+#    #+#              #
#    Updated: 2023/02/09 12:00:22 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	 utils.c ft_printf.c putcharf.c putdecf.c puthexf.c putnbrf.c putptrf.c putstrf.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
OBJ_DIR = obj/
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ_PREFIX = $(addprefix $(OBJ_DIR), $(OBJ))

$(OBJ_DIR)%.o: %.c ft_printf.h
	@mkdir -p $(OBJ_DIR)
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_PREFIX)
	@ar r $(NAME) $(OBJ_PREFIX)
	@echo Compilation completed
	@echo $(NAME) created

all: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo Object files removed

fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) removed

re: fclean all

.PHONY: all clean fclean re








