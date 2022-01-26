/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cndnls_for_next_movements.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:13:38 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/26 19:51:16 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cndnls_for_next_movements(char *buff, t_ps *s_ps)
{
	if (!ft_strncmp(buff, "sa\n", 4))
		ft_swap(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "sb\n", 4))
		ft_swap(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "ss\n", 4))
		ss(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "pa\n", 4))
		ft_push(&s_ps->st_b, &s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "pb\n", 4))
		ft_push(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "ra\n", 4))
		ft_rot(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "rb\n", 4))
		ft_rot(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rr\n", 4))
		rr(&s_ps->st_a, &s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rra\n", 4))
		ft_rot_rev(&s_ps->st_a, NULL);
	else if (!ft_strncmp(buff, "rrb\n", 4))
		ft_rot_rev(&s_ps->st_b, NULL);
	else if (!ft_strncmp(buff, "rrr\n", 4))
		rrr(&s_ps->st_a, &s_ps->st_b, NULL);
	else
		ft_error(NULL);
}
