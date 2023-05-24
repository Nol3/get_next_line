# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:18:34 by alcarden          #+#    #+#              #
#    Updated: 2023/05/24 19:57:44 by alcarden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
FLAGS = -Wall -Werror -Wextra -D BUFFER_SIZE=32
FILES = get_next_line.c\
		get_next_line_utils.c

OBJ = $(FILES:.c=.o)

all :$(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ) : $(FILES)
	@gcc $(FLAGS) -c $(FILES)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: re all fclean clean