/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 21:18:56 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 19:27:10 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_size_stack(t_list *st)
{
	int	len;

	len = 0;
	if (!st)
		return (0);
	while (st)
	{
		st = st->next;
		len++;
	}
	return (len);
}

void	parsing(int argc, char **argv, t_ps *s_ps)
{
	int		i;
	int		num;
	t_list	*new;

	new = NULL;
	i = 1;
	while (i < argc)
	{
		check_number(argv[i]);
		if (ft_atoi_ps(argv[i], &num))
			ft_error("Wrong input");
		if (check_double(&s_ps->st_a, num))
			ft_error("Duplicate nums");
		new = ft_lstnew(num);
		if (!new)
			ft_error("Memory was not allocated");
		ft_lstadd_back(&s_ps->st_a, new);
		s_ps->size_a++;
		i++;
	}
	if (is_sorted(&s_ps->st_a))
		ft_error("Stack is already sorted");
}
