#---- Final executable ---- #

NAME = push_swap

#---- Directories ----#
SRCS =  ./src/instruction.c \
./src/main.c \
./src/parsing.c \
./src/radix.c \
./src/sort_2_5.c
		
#./src/main/debug.c

OBJS = ${SRCS:.c=.o}

HEAD = ./headers/

# ---- Compiled Rules ---- #

CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${HEAD} 
	${CC} ${CFLAGS} -c $< -o $@ -I ${HEAD}


${NAME}:	${OBJS}
			make -C ./libft
			$(CC) ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}
			
# ---- Usual Commands ---- #
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		make fclean -C ./libft
		${RM} ${NAME}

re:		fclean
		$(MAKE) all

.PHONY:	all clean fclean re