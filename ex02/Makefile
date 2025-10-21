NAME = main 
SRC = main.cpp Fixed.cpp  
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
CC =	c++
RM =	rm -rf 

all : $(NAME)

$(NAME) :	$(OBJ)
					$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
		$(CC) $(CXXFLAGS) -c $< -o $@ 

clean :	
			$(RM)	$(OBJ) $(DEP)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

-include $(DEP)
