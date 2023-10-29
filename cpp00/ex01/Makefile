NAME = phonebook

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98

SRC = PhoneBook.cpp Contact.cpp

OBJ = ${SRC:.cpp=.o}

all:${NAME}

${NAME}: ${OBJ}
	@c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean: clean
	@rm -f ${NAME}

re: fclean all
