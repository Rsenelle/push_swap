/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 21:18:56 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/13 15:29:35 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*check_double(t_list *st_a, int x)
{
	while (st_a)
	{
		if (st_a->num == x)
			return(st_a);
		st_a = st_a->next; 
	}
	return (NULL);
}

void	parsing(int argc, char **argv, t_ps *s_ps)
{
	int		i;
	int		num;
	t_list	*new;

	i = 1;
	while (i < argc)
	{
		check_number(argv[i]);
		if (ft_atoi_ps(argv[i], &num))
			ft_error();
		if (check_double(s_ps->st_a, num))
			ft_error();
		new = ft_lstnew(num);
		if (!new)
			ft_error();
		ft_lstadd_back(&s_ps->st_a, new);
		s_ps->size_a++;
		i++;
	}
	if (is_sorted(s_ps->st_a))
		{
			ft_putendl_fd("Stack is already sorted", 2);
			ft_error();
		}
}

int	main(int argc, char **argv)
{
	t_ps	s_ps;

	if (argc > 2)
	{
		init_struct(&s_ps);
		parsing(argc, argv, &s_ps);
		// pst(&s_ps);
		//if argc = 3 ???
		if (argc == 4)
			sort_three(&s_ps.st_a);
		else
		{
			push_stack(&s_ps);
			sort_three(&s_ps.st_a);
		}
		// pst(&s_ps);
		while (s_ps.st_b)
		{
			while (find_index(&s_ps))
			{
				ft_rot(&s_ps.st_a, "ra");
			}
			ft_push(&s_ps.st_b, &s_ps.st_a, "pa");
		}
		while (!is_sorted(s_ps.st_a))
			ft_rot(&s_ps.st_a, "ra");
		// pst(&s_ps);

		// while (st->b)
		// {
		// 	while (nearest_value(st))
		// 	{
		// 		rotate(st, 'a');
		// 	}
		// 	push(st, 'a');
		// }
		// printf("%d ", find_index(&s_ps));
		// ft_push(&s_ps.st_a, &s_ps.st_b, "pb"); // должен отправить элемент из списка в список б
		// pst(&s_ps);
		// ft_push(&s_ps.st_a, &s_ps.st_b, "pb"); // должен отправить элемент из списка в список б
		// pst(&s_ps);
		// ft_push(&s_ps.st_a, &s_ps.st_b, "pb"); // должен отправить элемент из списка в список б
		// pst(&s_ps);
		// ft_push(&s_ps.st_a, &s_ps.st_b, "pb"); // должен отправить элемент из списка в список б
		// pst(&s_ps);
		// ft_swap(&s_ps.st_b, "sb"); // должно поменять первые два элемента в стэке b
		// pst(&s_ps);
		// ft_rot(&s_ps.st_a, "ra");
		// pst(&s_ps);
		// ft_rot_rev(&s_ps.st_b, "rrb");
		// pst(&s_ps);
		// ss(&s_ps.st_a, &s_ps.st_b, "ss");
		// pst(&s_ps);
		// rr(&s_ps.st_a, &s_ps.st_b, "rr");
		// pst(&s_ps);
		// rrr(&s_ps.st_a, &s_ps.st_b, "rrr");
		// pst(&s_ps);
	}
}
