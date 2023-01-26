.PHONY:	all clean fclean re fclean_lib fclean_all

# ******** VARIABLES ******** #

# ---- Final Executable --- #

NAME		=	push_swap

LIBFT		=	libft.a

# ---- Directories ---- #

DIR_OBJS	=	.objs/

DIR_SRCS	=	./

DIR_LIBFT	=	libft/

# ---- Files ---- #

HEAD	=	push_swap.h

SRCS	=	main.c parsing.c radix.c instruction.c sort_2.c

OBJS	=	${SRCS:%.c=${DIR_OBJS}%.o}

# ---- Compilation ---- #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

# ---- Commands ---- #

RM		=	rm -rf
MKDIR	=	mkdir -p

# ********* RULES ******** #

all		:	${NAME}

# ---- Variables Rules ---- #

${NAME}	:	${OBJS} ${addprefix ${DIR_LIBFT}, ${LIBFT}}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -L ${DIR_LIBFT}

${addprefix ${DIR_LIBFT}, ${LIBFT}}	:
			make ${LIBFT} -C ${DIR_LIBFT}

# ---- Compiled Rules ---- #

${DIR_OBJS}%.o	:	${DIR_SRCS}%.c push_swap.h ./libft/headers/ft_printf.h ./libft/headers/get_next_line_bonus.h ./libft/headers/libft.h | ${DIR_OBJS}
					${CC} ${CFLAGS} -I ${addprefix ${DIR_LIBFT}, headers/}

${DIR_OBJS}		:
					${MKDIR} ${DIR_OBJS}

# ---- Usual Commands ---- #

clean			:
					${RM} ${DIR_OBJS}

fclean			:	clean
					${RM} ${NAME}
					make fclean -C ${DIR_LIBFT}

re				:	fclean
					${MAKE} all
