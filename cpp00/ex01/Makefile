NAME = phonebook

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp

OBJ = ${SRC:.cpp=.o}

all:${NAME}

${NAME}: ${OBJ}
	c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

fclean:
	rm -f ${NAME} 