NAME = horde_Zombies

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = ${SRC:.cpp=.o}

%.o: %.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

all:${NAME}

${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean:clean
	rm -f ${NAME}

re:fclean all