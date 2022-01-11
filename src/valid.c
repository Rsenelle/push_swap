/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:07:06 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/09 15:04:04 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			ft_error();
	i++;
	}
	return (0);
}

int	is_sorted(t_list *st_a)
{
	while (st_a && st_a->next)
		if (st_a->num < st_a->next->num)
			st_a = st_a->next;
		else
			return (0);
	return (1);
}

// int main()
// {
// 	t_list	stack;
	
// 	if_sorted(&stack);
// }
