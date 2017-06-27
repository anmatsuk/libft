# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatsuk <matsuknastya@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/12 12:21:35 by amatsuk           #+#    #+#              #
#    Updated: 2017/06/12 12:21:37 by amatsuk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
FILES = ft*.c
OBJECTS = ft*.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean:
	@/bin/rm -f $(OBJECTS)
	@/bin/rm -f $(NAME)

re: fclean all