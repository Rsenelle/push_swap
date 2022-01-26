/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 21:56:31 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/26 19:34:57 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *s)
{
	if (!s)
		ft_putendl_fd("Error", 2);
	else
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd(s, 2);
	}
	exit(1);
}

void	print_stack(t_list *st, char *s)
{
	ft_putstr_fd(s, 1);
	if (!st)
		ft_putendl_fd("empty", 1);
	while (st)
	{
		ft_putnbr_fd(st->num, 1);
		if (st->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putendl_fd("", 1);
		st = st->next;
	}
}

void	pst(t_ps *s_ps)
{
	print_stack(s_ps->st_a, "A: ");
	print_stack(s_ps->st_b, "B: ");
}
