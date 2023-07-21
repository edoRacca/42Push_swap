/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:31:07 by eraccane          #+#    #+#             */
/*   Updated: 2023/07/19 12:31:09 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void    ft_set_position(t_Stack_node *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (NULL == stack)
		return ;
	centerline = ft_stack_size(stack) / 2;
	while (stack)
	{
		stack->position = i;
		if (i <= centerline)
			stack->above_middle = true;
		else
			stack->above_middle = false;
		stack = stack->next;
		++i;
	}
}

void ft_set_cheapest(t_Stack_node *stack)
{
	t_Stack_node	*node;
	int				bestprice;

	if (stack == NULL)
		return ;
	node = stack;
	bestprice = node->move_price;
	while (node)
	{
		if (node->move_price < bestprice)
			bestprice = node->move_price;
		node = node->next;
	}
	node = stack;
	while (node)
	{
		if (node->move_price == bestprice)
			node->cheapest = true;
		else
			node->cheapest = false;
		node = node->next;
	}
	
}

void	ft_set_nodes(t_Stack_node *a, t_Stack_node *b)
{
	ft_set_position(a);
	ft_set_position(b);
}
