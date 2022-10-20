# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 10:49:33 by jrinna            #+#    #+#              #
#    Updated: 2022/10/19 11:06:22 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LST_SRC := main.cpp
LST_OBJ := ${LST_SRC:.cpp=.o}
LST_DEP := ${LST_SRC:.cpp=.d}

DIR_SRC := source
DIR_OBJ := .object

SRC := ${addprefix ${DIR_SRC}/,${LST_SRC}}
OBJ := ${addprefix ${DIR_OBJ}/,${LST_OBJ}}
DEP := ${addprefix ${DIR_OBJ}/,${LST_DEP}}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror -MD #-fsanitize=address -g3
NAME := ez

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${DIR_OBJ}/%.o : ${DIR_SRC}/%.cpp Makefile | ${DIR_OBJ}
	${CC} ${CFLAGS} -c $< -o $@

${DIR_OBJ} :
	mkdir -p ${DIR_OBJ}

clean :
	rm -rf ${DIR_OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean

-include ${DEP}
