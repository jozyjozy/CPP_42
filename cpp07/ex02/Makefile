# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jozy <jozy@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 14:58:08 by jozy              #+#    #+#              #
#    Updated: 2024/01/09 10:22:24 by jozy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = Array
CXX       = c++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98 -g3
SRC       = main.cpp
INC       = Array.hpp
RM        = rm -f
OBJS_PATH = .objs/
OBJS_DIR  = $(addprefix $(OBJS_PATH), $(OBJS))
OBJS      = $(SRC:%.cpp=%.o)
DEPS      = $(SRC:%.cpp=$(OBJS_PATH)%.d)

all: $(NAME)

$(OBJS_PATH)%.o: %.cpp | $(OBJS_PATH)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

-include $(DEPS)

$(NAME): $(OBJS_PATH) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) $(OBJS_DIR) -o $(NAME)
	@echo "use ./$(NAME)"

clean:
	rm -fr $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean
