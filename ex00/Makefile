#Makefile____________________
NAME		:=	Start
INCLUDE		:=	include/

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98\
				-MMD -MP -I$(INCLUDE)

BUILD_DIR	:=	obj/
SRC_DIR		:=	src/

SRC			:=	main.cpp

OBJ			:=	$(SRC:%.cpp=$(BUILD_DIR)%.o)
DEPS		:=	$(SRC:%.cpp=$(BUILD_DIR)%.d)
OBJ_DIR		:=	$(sort $(dir $(OBJ)))

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking exercice"

$(BUILD_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) $< -c -o $@
	@echo "[$(CXX)] $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "cleaned $(BUILD_DIR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
