/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:37:11 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/13 14:26:07 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_ps *s_ps)
{
	t_list	*tmp;
	int		above_it;
	int		index_above_it;
	int		index;
	
	tmp = s_ps->st_a;
	above_it = tmp->num;
	index = 0;
	index_above_it = 0;
	while (tmp)
	{
		if ((above_it > tmp->num && above_it < s_ps->st_b->num)||
		(tmp->num > s_ps->st_b->num && 
		(s_ps->st_b->num > above_it || tmp->num < above_it)))
		{
			above_it = tmp->num;
			index_above_it = index;
		}
		tmp = tmp->next;
		index++;
	}
	return (index_above_it);
}
