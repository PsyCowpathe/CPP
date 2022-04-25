# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agirona <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 19:47:37 by agirona           #+#    #+#              #
#    Updated: 2022/04/25 18:17:09 by agirona          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRC = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

PATH = .

HEADER = Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -O3 -Wall -Wextra -Werror -std=c++98 -I $(PATH)

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
