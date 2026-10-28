#Makefile____________________
NAME		:=	Iter

CXX			:=	c++
CXXFLAGS	:=	-Wall -Werror -Wextra -std=c++98

SRC			:=	main.cpp

OBJ			:= $(SRC:.cpp=.o)

#Color_______________________

COLOR		:= \033[0;38;5;24m
NC			:= \033[0m

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking Iter"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $< -c -o $@
	@echo "$(COLOR)[$(CXX)]$(NC) $<"

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
