/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/17 11:50:36 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_add_node(t_Stack_node **stack, int value)
{
	t_Stack_node	*node;
	t_Stack_node	*last;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_Stack_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = value;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last = ft_find_last(*stack);
		last->next = node;
		node->prev = last;
	}
}

void	ft_free_stack(t_Stack_node *stack)
{
	t_Stack_node	*temp;

	if (stack == NULL)
		return ;
	temp = NULL;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	stack = NULL;
}

//1 if is empty
int	ft_is_empty(t_Stack_node *stack)
{
	return (!stack);
}

int	ft_push_node(t_Stack_node **pushed, t_Stack_node **popped)
{
	t_Stack_node	*node;
	t_Stack_node	*last;

	if (*popped == NULL || popped == NULL)
		return (0);
	node = *popped;
	*popped = (*popped)->next;
	if (*popped)
		(*popped)->prev = NULL;
	node->prev = NULL;
	if (*pushed == NULL)
	{
		*pushed = ft_find_last(node);
		// ft_printf("(*pushed)->value: %d\n", (*pushed)->value);
		// ft_printf("node->value: %d\n", node->value);
		node->prev = NULL;
	}
	else
	{
		last = ft_find_last(*pushed);
		last->next = node;
		node->prev = last;
	}
	return (1);
}
