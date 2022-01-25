/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:14:30 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:50:12 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_list **from, t_list **to, char *s)
{
	t_list	*temp;

	if (s)
		ft_putendl_fd(s, 1);
	if (*from)
	{
		temp = (*from)->next;
		ft_lstadd_front(to, *from);
		*from = temp;
	}
}
