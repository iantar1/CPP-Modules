NAME = 

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
 
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = ${SRC:.cpp=.o}

${NAME}:${OBJ}
	CC ${CPPFLAGS} ${OBJ} -o ${NAME}

all:${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all