/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cndnls_for_next_movements.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:13:38 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/25 15:30:09 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cndnls_for_next_movements(char *buff, t_ps *s_ps)
{
	if (!ft_strncmp(buff, "sa", 4))
		ft_swap(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "sb", 4))
		ft_swap(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "ss", 4))
		ss(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "pa", 4))
		ft_push(&s_ps->st_b, &s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "pb", 4))
		ft_push(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "ra", 4))
		ft_rot(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "rb", 4))
		ft_rot(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rr", 4))
		rr(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rra", 4))
		ft_rot_rev(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "rrb", 4))
		ft_rot_rev(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rrr", 4))
		rrr(&s_ps->st_a, &s_ps->st_b, NULL);
}