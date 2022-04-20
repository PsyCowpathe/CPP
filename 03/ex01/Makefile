# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agirona <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 20:37:16 by agirona           #+#    #+#              #
#    Updated: 2022/04/14 20:38:00 by agirona          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = ClavTrap

SRC = main.cpp ClapTrap.cpp ClavTrap.cpp

HEADER = ClapTrap.hpp ClavTrap.hpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I $(HEADER)

%.o: %.cpp $(HEADER)
	c++ $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
			c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re