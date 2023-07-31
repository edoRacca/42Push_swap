/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:17:40 by eraccane          #+#    #+#             */
/*   Updated: 2023/07/19 10:17:41 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_Stack_node	*ft_find_highest_node(t_Stack_node *stack)
{
	int				highest;
	t_Stack_node	*highestnode;

	if (stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highestnode = stack;
		}
		stack = stack->next;
	}
	return (highestnode);
}

t_Stack_node	*ft_find_cheapest_node(t_Stack_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

long	ft_atol(char *s)
{
	int		i;
	int		neg;
	long	ris;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	neg = 1;
	if (s[i] == '-')
		neg = -1;
	if (neg == -1 || s[i] == '+')
		i++;
	ris = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		ris = (ris * 10) + (s[i] - '0');
		i++;
	}
	return (ris * neg);
}

void	ft_free_star(char **str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}
