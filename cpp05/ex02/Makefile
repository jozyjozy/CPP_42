# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 10:00:09 by jlarue            #+#    #+#              #
#    Updated: 2024/01/04 13:00:06 by jlarue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRCS	= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS	= $(SRCS:%.cpp=%.o)
DEPS	= $(SRCS:%.cpp=%.d)

.PHONY: all clean re


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

%.d: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -MF $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	@printf "Compiling\n"
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf " - Executable ready.\n"


clean:
	@$(RM) $(OBJS) $(DEPS)
	@printf " objet et deps removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf " objet deps et exec removed.\n"

re: fclean
	make -C .

.PHONY: all clean re fclean

-include $(DEPS)
