# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 13:51:04 by rjobert           #+#    #+#              #
#    Updated: 2024/01/10 14:07:39 by rjobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98
INC = -MMD -I ./

NAME = brainz
HEADER = Zombie.h
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) $(INC) -o $(NAME)

%.o: %.cpp Makefile $(HEADER)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.phony: clean fclean re name

