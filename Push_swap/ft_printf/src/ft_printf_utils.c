/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:14:33 by eraccane          #+#    #+#             */
/*   Updated: 2023/05/01 13:14:34 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
