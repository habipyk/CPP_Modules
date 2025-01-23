SRC		 = Harl.cpp main.cpp
OBJ		 = $(SRC:.cpp=.o)
CXX		 = c++
RM		 = rm -rf
CXXFLAGS =	-Wall -Werror -Wextra -std=c++98
NAME	 = Harl

all: $(NAME)

$(NAME):	$(OBJ) 
			@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean:	clean
		@$(RM) $(NAME)

re: fclean $(NAME)
.PHONY: all clean fclean re