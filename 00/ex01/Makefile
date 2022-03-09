# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agirona <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 16:01:37 by agirona           #+#    #+#              #
#    Updated: 2022/03/08 20:22:20 by agirona          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

INC = ./

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I $(INC)

%.o: %.cpp
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
