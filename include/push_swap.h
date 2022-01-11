/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:47:33 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/09 18:59:12 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>

# include "libft.h"

typedef struct		s_ps
{
	t_list	*st_a;
	t_list	*st_b;
	size_t	size_a;
	size_t	size_b;
	size_t	index;
}					t_ps;

void	ft_error();
int		check_number(char *s);
void	print_stack(t_list *st, char *s);
t_list	*check_double(t_list *st_a, int x);
int		is_sorted(t_list *st_a);
void	init_struct(t_ps *s_ps);
void	pst(t_ps *s_ps);
void	ft_swap(t_list **list, char *s);
void	ft_push(t_list **from, t_list **to, char *s);
void	ft_rot(t_list **list, char *s);
void	ft_rot_rev(t_list **list, char *s);
void	rr(t_list **list_a, t_list **list_b, char *s);
void	rrr(t_list **list_a, t_list **list_b, char *s);
void	ss(t_list **list_a, t_list **list_b, char *s);
void	sort_three(t_list **st);
void	push_stack(t_ps *s_ps);

#endif