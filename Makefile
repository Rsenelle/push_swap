NAME	=	push_swap

#NAME_B	=	push_swap_bonus

SRCS_F	=	parsing.c		error.c		init_struct.c		ft_swap.c		ft_push.c		ft_rot.c		valid.c		sort3elems.c
SRCS_D	=	src/

#SRCS_F_B	=
#SRCS_D_B	=	src_bonus/

INCLUDE	=	-I./include/ -I./libft/

OBJS	=	$(SRCS:.c=.o)

#OBJS_B	=	$(SRCS_B:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -MMD -g
SRCS	=	$(addprefix $(SRCS_D),$(SRCS_F))
#SRCS_B	=	$(addprefix $(SRCS_D_B),$(SRCS_F_B))

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

#bonus	:	$(OBJS_B)

re		:	fclean all

.PHONY	:	all clean fclean re bonus

-include	$(OBJS:.o=.d)