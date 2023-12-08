NAME = Polymorphism

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = ${SRC:.cpp=.o}

%.o : %.cpp %.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all