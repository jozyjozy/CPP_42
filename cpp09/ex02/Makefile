# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 14:58:08 by jozy              #+#    #+#              #
#    Updated: 2024/01/17 12:21:26 by jozy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = PmergeMe

CC        = c++ -g
FLAGS    = -Wall -Wextra -Werror -std=c++98 -pedantic
RM        = rm -rf

SRCS = main.cpp PmergeMe.cpp

OBJS = ${SRCS:%.cpp=%.o}
DEPS = ${SRCS:%.cpp=%.d}

-include ${DEPS}

GREEN        =    \e[92;5;118m

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
