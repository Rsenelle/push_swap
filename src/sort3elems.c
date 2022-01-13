/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3elems.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@(*st)udent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:24:11 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/09 16:34:31 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **st)
{
	while (!((*st)->num < (*st)->next->num && (*st)->next->num < (*st)->next->next->num && (*st)->num < (*st)->next->next->num))
	{
		if ((*st)->num > (*st)->next->num && (*st)->next->num < (*st)->next->next->num && (*st)->num < (*st)->next->next->num)
			ft_swap(st, "sa");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > (*st)->next->next->num && (*st)->num > (*st)->next->next->num)
			ft_rot_rev(st, "rra");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > (*st)->next->next->num && (*st)->num < (*st)->next->next->num)
		{
			ft_rot_rev(st, "rra");
			ft_swap(st, "sa");
		}
		else if ((*st)->num > (*st)->next->num && (*st)->next->num < (*st)->next->next->num && (*st)->num > (*st)->next->next->num)
			ft_rot(st, "ra");
		else if ((*st)->num > (*st)->next->num && (*st)->next->num > (*st)->next->next->num && (*st)->num > (*st)->next->next->num)
		{
			ft_rot(st, "ra");
			ft_swap(st, "sa");
		}
	}
}

void	push_stack(t_ps *s_ps)
{
	while (s_ps->size_a != 3)
	{
		ft_push(&s_ps->st_a, &s_ps->st_b, "pb");
		s_ps->size_a--;
		s_ps->size_b++;
	}
	
}
