/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:26:32 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/22 18:42:37 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*arr_sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	*arr;

	j = 0;
	i = 1;
	arr = malloc(sizeof(int) * (argc - 1));
	if (!arr)
		return (NULL);
	while (i < argc)
		ft_atoi_ps(argv[i++], &arr[j++]);
	i = 0;
	while (i != argc - 1)
	{
		j = 0;
		while (j != argc - 2)
		{
			if (arr[j] > arr[j + 1])
				ft_swap_int(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	return (arr);
}
