NAME = main
SRC = main.cpp Fixed.cpp
CFLAGS = -Wall -Wextra -Werror -std=c98 -MD -MDI
OBJET = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
CC = c++
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
			$(CC) $(CFLAGS) -c $< -o $@

clean: 
			$(RM) $(OBJ) $(DEP)

fclean: clean 
			$(RM) $(NAME)

re: fclean all

-include $(DEP)
