/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:54:30 by eraccane          #+#    #+#             */
/*   Updated: 2023/07/03 11:54:37 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

t_Stack_node	*ft_find_last(t_Stack_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	ft_stacklen(t_Stack_node *stack)
{
	int	l;
	
	if (stack == NULL)
		return (0);
	l = 0;
	while (stack)
	{
		l++;
		stack = stack->next;
	}
	return (l);
}

void	ft_print_stack(t_Stack_node *stack)
{
	stack = ft_find_last(stack);
	while (stack)
	{
		ft_printf("%d\n",stack->value);
		stack = stack->prev;
	}
}

t_Stack_node	*ft_find_smallest(t_Stack_node *stack)
{
	int				smallest;
	t_Stack_node	*node;

	if (stack == NULL)
		return (NULL);
	smallest = stack->value;
	while (stack)
	{
		if (stack->value < smallest)
		{
			smallest = stack->value;
			node = stack;
		}
		stack = stack->next;
	}
	return (node);
}