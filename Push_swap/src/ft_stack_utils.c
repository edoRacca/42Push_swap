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

void	ft_print_stack(t_Stack_node *stack)
{
	int	i;

	if (ft_is_empty(stack))
		ft_printf("stack[0]:\tNULL\n");
	i = 0;
	while (stack)
	{
		ft_printf("stack[%d]:\n", i);
		ft_printf("\tvalue:\t\t%d\n", stack->value);
		ft_printf("\tposition:\t%d\n", stack->position);
		stack = stack->next;
		i++;
	}
}

t_Stack_node	*ft_find_smallest(t_Stack_node *stack)
{
	int				smallest;
	t_Stack_node	*node;

	if (stack == NULL)
		return (NULL);
	smallest = INT_MAX;
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

t_Stack_node	*ft_findlast(t_Stack_node *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_stack_size(t_Stack_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_Stack_node	*ft_find_first(t_Stack_node *stack)
{
	return (stack);
}
