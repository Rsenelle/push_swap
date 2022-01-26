/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:07:06 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/26 19:32:38 by rsenelle         ###   ########.fr       */
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
			ft_error(NULL);
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

void	validation(int argc, char **argv, t_ps *s_ps)
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
			ft_error(NULL);
		if (check_double(&s_ps->st_a, num))
			ft_error(NULL);
		new = ft_lstnew(num);
		if (!new)
			ft_error(NULL);
		ft_lstadd_back(&s_ps->st_a, new);
		s_ps->size_a++;
		i++;
	}
}
