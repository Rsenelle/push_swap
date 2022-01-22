/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:07:06 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:58:54 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_number(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			ft_error("Incorrect input");
	i++;
	}
	return (0);
}

int	is_sorted(t_list **st_a)
{
	t_list	*temp;

	temp = *st_a;
	while (temp && temp->next)
	{
		if (temp->num < temp->next->num)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

int	check_double(t_list **st_a, int x)
{
	t_list	*temp;

	if (*st_a == NULL)
		return (0);
	temp = *st_a;
	while (temp)
	{
		if (temp->num == x)
			return (1);
		temp = temp->next;
	}
	return (0);
}
