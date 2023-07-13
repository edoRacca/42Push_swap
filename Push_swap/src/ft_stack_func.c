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

t_Stack_node	*ft_new_node(int value)
{
	t_Stack_node		*list;

	list = malloc(sizeof(t_Stack_node));
	if (!list)
		return (NULL);
	list->value = value;
	list->next = NULL;
	return (list);
}

void	ft_add_node(t_Stack_node **lst, t_Stack_node *new)
{
	t_Stack_node	*last;

	last = ft_findlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

void	ft_pop_node(t_Stack_node **stack)
{
	t_Stack_node	*node;

	if (stack == NULL || *stack == NULL)
		return ;
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		node = *stack;
		while (node->next->next != NULL)
			node = node->next;
		free(node->next);
		node->next = NULL;
	}
}
