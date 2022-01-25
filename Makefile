NAME	=	push_swap

SRCS_F	=	utils.c				init_struct.c		main.c			valid.c\
			ft_push.c			ft_rot.c			ft_swap.c		sort3elems.c\
			sorting5elems.c		arr_sort.c			big_sort.c

SRCS_D	=	src/

INCLUDE	=	-I./include/ -I./libft/

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -MMD -g

SRCS	=	$(addprefix $(SRCS_D),$(SRCS_F))

LIBFT	=	./libft/libft.a

$(NAME)	:	$(OBJS)
			$(MAKE) -C $(dir $(LIBFT))
			$(CC) $(CFLAGS) $(INCLUDE) $(LIBFT) $(OBJS) -o $(NAME)

all		:	$(NAME)

%.o		:	%.c
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean	:	
			$(MAKE) clean -C $(dir $(LIBFT))
			rm -rf $(OBJS) $(OBJS:.o=.d) $(OBJS_B) $(OBJS_B:.o=.d) 

fclean	:	clean
			$(MAKE) fclean -C $(dir $(LIBFT))
			rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re bonus

-include	$(OBJS:.o=.d)