NAME = main
SRC = main.cpp Fixed.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
CC = c++
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
			$(CC) $(CXXFLAGS) -c $< -o $@

clean: 
			$(RM) $(OBJ) $(DEP)

fclean: clean 
			$(RM) $(NAME)

re: fclean all

-include $(DEP)
