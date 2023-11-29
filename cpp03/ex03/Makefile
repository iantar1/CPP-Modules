NAME = Aaaaand

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = ${SRC:.cpp=.o}

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $^ -o $@

${NAME}: ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}
 
all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all