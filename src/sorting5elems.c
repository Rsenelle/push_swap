/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5elems.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:32:27 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:57:35 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min(t_ps *s_ps)
{
	int		min;
	t_list	*temp;

	temp = s_ps->st_a;
	min = MAX_INT;
	while (temp)
	{
		if (min > temp->num)
			min = temp->num;
		temp = temp->next;
	}
	return (min);
}

void	push_min(t_ps *s_ps, int argc)
{
	t_list	*tmp;
	int		min;

	tmp = s_ps->st_a;
	min = find_min(s_ps);
	if (tmp->next->num == min)
		ft_swap(&s_ps->st_a, "sa");
	else if (tmp->next->next->num == min)
	{
		ft_rot(&s_ps->st_a, "ra");
		ft_rot(&s_ps->st_a, "ra");
	}
	else if (tmp->next->next->next->num == min && argc == 6)
	{
		ft_rot_rev(&s_ps->st_a, "rra");
		ft_rot_rev(&s_ps->st_a, "rra");
	}
	else if ((tmp->next->next->next->num == min && argc == 5)
		|| (tmp->num != min && argc == 6))
		ft_rot_rev(&s_ps->st_a, "rra");
	ft_push(&s_ps->st_a, &s_ps->st_b, "pb");
}

void	sort_five(t_ps *s_ps, int argc)
{
	int	k;

	k = argc;
	while (argc != 4)
		push_min(s_ps, argc--);
	sort_three(&s_ps->st_a);
	ft_push(&s_ps->st_b, &s_ps->st_a, "pa");
	if (k == 6)
		ft_push(&s_ps->st_b, &s_ps->st_a, "pa");
}
