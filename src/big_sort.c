/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:47:47 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:59:48 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_right_index(t_list *s_list, t_ps *s_ps)
{
	t_list	*tmp;
	size_t	i;
	size_t	size;

	tmp = s_list;
	size = ft_size_stack(s_list);
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->num == s_ps->arr[i])
			{
				(*tmp).index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

size_t	find_max_index(t_list *s_list, t_ps *s_ps)
{
	t_list	*tmp;
	size_t	max;

	tmp = s_list;
	max = 0;
	assign_right_index(s_list, s_ps);
	while (tmp)
	{
		if (max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

static int	find_max_elems_place(t_list *s_list, size_t max)
{
	t_list	*tmp;
	size_t	i;

	i = 0;
	tmp = s_list;
	while (tmp->next)
	{
		if (tmp->index == max)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

static void	sort_b(t_ps *s_ps)
{
	size_t	i;
	size_t	max;
	size_t	arguments;

	while (s_ps->st_b)
	{
		arguments = (ft_size_stack(s_ps->st_b)) / 2;
		max = find_max_index(s_ps->st_b, s_ps);
		i = find_max_elems_place(s_ps->st_b, max);
		if (s_ps->st_b->index == max)
			ft_push(&s_ps->st_b, &s_ps->st_a, "pa");
		else if (i <= arguments && s_ps->st_b->index != max)
			ft_rot(&s_ps->st_b, "rb");
		else if (i > arguments && s_ps->st_b->index != max)
			ft_rot_rev(&s_ps->st_b, "rrb");
	}
}

void	big_sort(t_ps *s_ps)
{
	size_t	i;

	i = 0;
	assign_right_index(s_ps->st_a, s_ps);
	while (s_ps->st_a)
	{
		if (s_ps->st_a->index <= i && i > 0)
		{
			ft_push(&s_ps->st_a, &s_ps->st_b, "pb");
			ft_rot(&s_ps->st_b, "rb");
			i++;
		}
		else if (s_ps->st_a->index <= (i + 23))
		{
			ft_push(&s_ps->st_a, &s_ps->st_b, "pb");
			i++;
		}
		else if (s_ps->st_a->index >= i)
			ft_rot(&s_ps->st_a, "ra");
	}
	sort_b(s_ps);
}
