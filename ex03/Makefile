# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 18:06:27 by rjobert           #+#    #+#              #
#    Updated: 2024/01/11 20:20:53 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = humans
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
RM = rm -rf
OBJS = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)
HEADER = HumanA.h HumanB.h Weapon.h
FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -I ./

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

.phony: re all clean fclean