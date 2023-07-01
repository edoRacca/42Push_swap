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

t_Stack	*ft_create_stack(int capacity)
{
	t_Stack	*stack; 

	stack = (t_Stack *)malloc(sizeof(t_Stack));
	stack->collection = (int *)malloc(capacity * sizeof(int));
	if (stack->collection == NULL)
	{
		free(stack);
		return (NULL);
	}
	stack->capacity = capacity;
	stack->size = 0;
	stack->top = -1;
	return (stack);
}

void	ft_free_stack(t_Stack *stack)
{
	free(stack->collection);
	free(stack);
}

int	ft_is_full(t_Stack *stack)
{
	if (stack->capacity == stack->size)
		return (1);
	return (0);
}

int	ft_is_empty(t_Stack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}
