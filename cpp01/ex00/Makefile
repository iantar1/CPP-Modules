CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Brainz

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all