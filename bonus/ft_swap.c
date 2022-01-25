/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:49:53 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:52:43 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_list **list, char *s)
{
	t_list	*tmp;

	if (s)
		ft_putendl_fd(s, 1);
	if (*list && (*list)->next)
	{
		tmp = (*list)->next;
		(*list)->next = tmp->next;
		tmp->next = *list;
		*list = tmp;
	}
}

void	ss(t_list **list_a, t_list **list_b, char *s)
{
	ft_swap(list_a, s);
	ft_swap(list_b, NULL);
}
