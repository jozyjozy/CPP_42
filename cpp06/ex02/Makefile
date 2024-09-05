NAME	= serialize
CXX		= c++
CXXFLAG	= -Wall -Wextra -Werror -std=c++98 -g3
SRC		= Base.cpp A.cpp B.cpp C.cpp main.cpp
INC		= Base.hpp
RM		= rm -f
OBJS_PATH	= .objs/
OBJS_DIR	= $(addprefix $(OBJS_PATH), $(OBJS))
OBJS		= $(SRC:%.cpp=%.o)
DEPS	 = $(SRC:%.cpp=%.d)


all: $(NAME)

$(OBJS_PATH)%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.d: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -MF $< -c $@


$(NAME): $(OBJS_PATH) $(OBJS_DIR)
		$(CXX) $(CXXFLAG) $(OBJS_DIR) -o $(NAME)
		@echo "use ./$(NAME)"

-include $(DEPS)

clean:
	rm -fr $(OBJS_PATH)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all


.PHONY:	all clean re fclean
