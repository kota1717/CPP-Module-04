NAME := abstract_class

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -pedantic -I includes
RMDIR := rm -rf

SRC_DIR := src
INCLUDES_DIR := includes
OBJ_DIR := obj

SRCS := $(SRC_DIR)/main.cpp \
				$(SRC_DIR)/AAnimal.cpp \
				$(SRC_DIR)/Cat.cpp \
				$(SRC_DIR)/Dog.cpp \
				$(SRC_DIR)/WrongAnimal.cpp \
				$(SRC_DIR)/WrongCat.cpp \
				$(SRC_DIR)/Brain.cpp

OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RMDIR) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
