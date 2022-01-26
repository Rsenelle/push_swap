/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:21:30 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/26 17:10:31 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rot(t_list **list, char *s)
{
	t_list	*temp;

	if (s)
		ft_putendl_fd(s, 1);
	if (*list && (*list)->next)
	{
		ft_lstadd_back(list, *list);
		temp = *list;
		*list = (*list)->next;
		temp->next = NULL;
	}
}

void	ft_rot_rev(t_list **list, char *s)
{
	t_list	*temp;
	t_list	*temp1;

	if (s)
		ft_putendl_fd(s, 1);
	if (*list && (*list)->next)
	{
		temp = ft_lstlast(*list);
		temp1 = *list;
		while ((*list)->next->next)
			*list = (*list)->next;
		(*list)->next = NULL;
		temp->next = temp1;
		*list = temp;
	}
}

void	rr(t_list **list_a, t_list **list_b, char *s)
{
	ft_rot(list_a, s);
	ft_rot(list_b, NULL);
}

void	rrr(t_list **list_a, t_list **list_b, char *s)
{
	ft_rot_rev(list_a, s);
	ft_rot_rev(list_b, NULL);
}
