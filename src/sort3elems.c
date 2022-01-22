/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3elems.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:53:07 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:54:36 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_list **st)
{
	while (!((*st)->num < (*st)->next->num && (*st)->next->num < \
			(*st)->next->next->num && (*st)->num < (*st)->next->next->num))
	{
		if ((*st)->num > (*st)->next->num && (*st)->next->num < \
			(*st)->next->next->num && (*st)->num < (*st)->next->next->num)
			ft_swap(st, "sa");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num > (*st)->next->next->num)
			ft_rot_rev(st, "rra");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num < (*st)->next->next->num)
		{
			ft_rot_rev(st, "rra");
			ft_swap(st, "sa");
		}
		else if ((*st)->num > (*st)->next->num && (*st)->next->num < \
				(*st)->next->next->num && (*st)->num > (*st)->next->next->num)
			ft_rot(st, "ra");
		else if ((*st)->num > (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num > (*st)->next->next->num)
		{
			ft_rot(st, "ra");
			ft_swap(st, "sa");
		}
	}
}
