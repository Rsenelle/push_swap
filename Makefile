NAME		=	push_swap

NAME_BONUS	=	checker

SRCS_F		=	utils.c				init_struct.c		main.c			valid.c\
				ft_push.c			ft_rot.c			ft_swap.c		sort3elems.c\
				sorting5elems.c		arr_sort.c			big_sort.c

SRCS_F_B	=	utils_bonus.c			init_struct_bonus.c			main_bonus.c			valid_bonus.c\
				ft_push.c				ft_rot.c					ft_swap.c				get_next_line_utils.c\
				get_next_line.c			cndnls_for_next_movements.c

SRCS_D		=	src/

SRCS_D_B	=	bonus/

INCLUDE		=	-I./include/ -I./libft/

OBJS		=	$(SRCS:.c=.o)

OBJS_B		=	$(SRCS_B:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -MMD -g

SRCS		=	$(addprefix $(SRCS_D),$(SRCS_F))

SRCS_B		=	$(addprefix $(SRCS_D_B),$(SRCS_F_B))

LIBFT		=	./libft/libft.a

$(NAME)		:	$(OBJS)
				$(MAKE) -C $(dir $(LIBFT))
				$(CC) $(CFLAGS) $(INCLUDE) $(LIBFT) $(OBJS) -o $(NAME)

$(NAME_BONUS)	:	$(OBJS_B)
					$(MAKE) -C $(dir $(LIBFT))
					$(CC) $(CFLAGS) $(INCLUDE) $(LIBFT) $(OBJS_B) -o $(NAME_BONUS)

all		:	$(NAME)

bonus	:	$(NAME_BONUS)

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

-include	$(OBJS:.o=.d) $(OBJS_B:.o=.d)
