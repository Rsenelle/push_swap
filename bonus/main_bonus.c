/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:17 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/25 15:16:13 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	more_arguments(int argc, char **argv, t_ps *s_ps)
{
	char	*buff;
	int		read_sym;

	buff = malloc(sizeof(char) * 4);
	if (argc > 2)
	{
		init_struct(s_ps);
		validation(argc, argv, s_ps);
		s_ps->arr = arr_sort(argc, argv);
		if (argc >= 3)
		{
			while (*buff != "\n")
			{
				read_sym = read(0, buff, 1);
				if (read_sym < 0)
					exit(1);
			}
			cndnls_for_next_movements(buff, s_ps);
		}
	
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 0;
	if (argc == 1)
		exit(1);
	if (argc == 2)
	{
		s = "a ";
		argv[1] = ft_strjoin(s, argv[1]);
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
			exit(1);
		i = 1;
		argc = 1;
		while (argv[i])
		{
			check_number(argv[i]);
			argc++;
			i++;
		}
	}
}
