/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_func_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:46:59 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 10:47:02 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_push(t_Stack_node *stack, int n)
{
	if (ft_is_full(stack) == 1)
		return (1);
	stack->collection[stack->size] = n;
	stack->size++;
	stack->top++;
	return (0);
}

int	ft_pop(t_Stack_node *stack)
{
	if (ft_is_empty(stack) == 1)
		return (1);
	stack->collection[stack->top] = 0;
	stack->size--;
	stack->top--;
	return (0);
}

//solo per fase di test
void	ft_print_stack(t_Stack_node *stack)
{
	int	i;

	i = stack->size - 1;
	while (i >= 0)
	{
		ft_printf("stack[%d]: %d\n", i, stack->collection[i]);
		i--;
	}
	ft_printf("\n");
}
