/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:17:07 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:08:13 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_check_space(char *s)
{
	int	i;

	i = 0;
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '\0')
		return (1);
	return (0);
}

int	ft_check_bigint(int n, char *s[])
{
	int		i;
	long	nbr;

	i = 1;
	while (i < n)
	{
		nbr = ft_atoi(s[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

//if string check is ok, check if numbers are ok
int	ft_check_dup(int n, char *s[])
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

//check if argument is a string
int	ft_check_str(int n, char *s[])
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		if (ft_atoi(s[i]) == 0)
		{
			j = 0;
			if ((s[i][j] == '\0') || ft_check_space(s[i]) == 1)
				return (1);
			while (s[i][j])
			{
				if (ft_isalpha(s[i][j]) == 1)
					return (1);
				j++;
			}
		}
		i++;
	}
	return (0);
}

//check all error types
int	ft_check_err(int n, char *s[])
{
	if ((ft_check_str(n, s) == 1) || (ft_check_dup(n, s) == 1) || 
		(ft_check_bigint(n, s) == 1))
		return (1);
	return (0);
}
