# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 18:06:27 by rjobert           #+#    #+#              #
#    Updated: 2024/01/17 18:13:02 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = humans
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
RM = rm -rf
OBJS = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)
HEADER = HumanA.h HumanB.h Weapon.h
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -I ./

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean