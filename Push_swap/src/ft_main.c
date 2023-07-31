/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:08:57 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_new_ac(char *av[])
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	flag;

	if (ac == 1)
		return (0);
	flag = 0;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ac = ft_new_ac(av);
		flag = 1;
	}
	if (ft_check_err(ac, av, flag) == 1)
		write(STDERR_FILENO, "Error\n", 6);
	else
		ft_push_swap(ac, av, flag);
}
