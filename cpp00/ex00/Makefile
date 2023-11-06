NAME = megaphone

SRC = megaphone.cpp  

CPPFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.cpp=.o}
all:$(NAME)

$(NAME): ${OBJ}
	c++ ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all