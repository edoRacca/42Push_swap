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
	t_Stack_node *temp;

	temp = NULL;
	if (stack == NULL)
		return ;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

//1 if is empty
int	ft_is_empty(t_Stack_node *stack)
{
	return (!stack);
}

void	ft_pop_node(t_Stack_node **stack)
{
	t_Stack_node	*node;

	if (ft_is_empty(*stack))
		return ;
	node = *stack;
	*stack = (*stack)->next;
	free(node);
}
