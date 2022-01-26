/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsenelle <rsenelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:03:17 by rsenelle          #+#    #+#             */
/*   Updated: 2022/01/26 20:30:47 by rsenelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	more_arguments_bonus(int argc, char **argv, t_ps *s_ps)
{
	char	*command;

	if (argc > 2)
	{
		init_struct(s_ps);
		validation(argc, argv, s_ps);
		while (1)
		{
			command = get_next_line(0);
			if (command == NULL)
				break ;
			cndnls_for_next_movements(command, s_ps);
		}
		if (is_sorted (&s_ps->st_a) && !s_ps->st_b)
			ft_putendl_fd("OK", 1);
		else
			ft_putendl_fd("KO", 1);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*s;
	t_ps	s_ps;

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
	more_arguments_bonus(argc, argv, &s_ps);
	exit(0);
}
