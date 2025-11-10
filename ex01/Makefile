NAME = claptrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = ClapTrap.cpp\
		main.cpp

HFILES = ClapTrap.hpp

OBJ = $(FILES:.cpp=.o)


all : $(OBJ) $(NAME)
	

$(NAME): $(OBJ) $(HFILES)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)


%.o : %.c $(HFILES)
	$(CC) $(CFLAGS) -c -O  $< -o $@
	
clean :
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
