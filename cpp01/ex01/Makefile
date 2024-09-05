# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 10:43:05 by jlarue            #+#    #+#              #
#    Updated: 2023/08/02 16:37:33 by jlarue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD
RM		= rm -rf

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = ${SRCS:%.cpp=%.o}
DEPS = ${SRCS:%.cpp=%.d}



GREEN		=	\e[92;5;118m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJS)
	@printf "Compiling\n"
	@ $(CC) $(FLAGS) ${OBJS} -o $(NAME)
	@printf "$(GREEN) - Executable ready.\n"

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	@$(RM) ${OBJS} ${DEPS}
	@printf "$(GREEN) objet et deps removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(GREEN) objet deps et exec removed.\n"

re: fclean
	make -C .

-include ${DEPS}
