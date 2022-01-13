/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:47:00 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/06 20:36:18 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_struct(t_ps *s_ps)
{
	s_ps->st_b = NULL;
	s_ps->st_a = NULL;
	s_ps->size_a = 0;
	s_ps->size_b = 0;
	s_ps->index = 0;
}