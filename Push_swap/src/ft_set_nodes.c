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

// search for a bigger node, if there isn't the best match is the smallest
// so every node in b has its target node in a
void	ft_set_target(t_Stack_node *a, t_Stack_node *b)
{
	t_Stack_node	*target;
	t_Stack_node	*current;
	int				bestindex;

	while (b)
	{
		bestindex = INT_MAX;
		current = a;
		while (current)
		{
			if (current->value > b->value 
				&& current->value < bestindex)
			{
				bestindex = current->value;
				target = current;
			}
			current = current->next;
		}
		if (bestindex == INT_MAX)
			b->target = ft_find_smallest(a);
		else
			b->target = target;
		b = b->next;
	}
}

// set price for pushing node from b to a
// that checks for the relativre positions in the stack
// for every node and sets the price
void	ft_set_price(t_Stack_node *a, t_Stack_node *b)
{
	int	sizea;
	int	sizeb;

	sizea = ft_stack_size(a);
	sizeb = ft_stack_size(b);
	while (b)
	{
		b->move_price = sizeb - b->position - 1;
		if (b->above_middle == false)
			b->move_price = b->position + 1;
		if (b->target->above_middle)
			b->move_price += sizea - b->target->position - 1;
		else
			b->move_price += b->target->position + 1;
		b = b->next;
	}
}

//set position of every node in a stack
void	ft_set_position(t_Stack_node *stack)
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
			stack->above_middle = false;
		else
			stack->above_middle = true;
		stack = stack->next;
		i++;
	}
}

//find the cheapest node in a stack (cheapest move price)
void	ft_set_cheapest(t_Stack_node *stack)
{
	int				bestval;
	t_Stack_node	*bestnode;

	if (stack == NULL)
		return ;
	bestval = INT_MAX;
	while (stack)
	{
		if (stack->move_price < bestval)
		{
			bestval = stack->move_price;
			bestnode = stack;
		}
		stack = stack->next;
	}
	bestnode->cheapest = true;
}

void	ft_set_nodes(t_Stack_node *a, t_Stack_node *b)
{
	ft_set_position(a);
	ft_set_position(b);
	ft_set_target(a, b);
	ft_set_price(a, b);
	ft_set_cheapest(b);
}
