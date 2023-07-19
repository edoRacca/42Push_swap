/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:25 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rotate(t_Stack_node **stack)
{
	t_Stack_node	*node;
	int				i;

	i = 0;
	while (i < ft_stack_size(*stack) - 1)
	{
		node = ft_findlast(*stack);
		node->next = *stack;
		*stack = (*stack)->next;
		node->next->next = NULL;
		i++;
	}
}

void	ft_ra(t_Stack_node **a)
{
	if (ft_stack_size(*a) < 2)
		return ;
	ft_rotate(a);
	ft_print_ra();
}

void	ft_rb(t_Stack_node **b)
{
	if (ft_stack_size(*b) < 2)
		return ;
	ft_rotate(b);
	ft_print_rb();
}

void	ft_rr(t_Stack_node **a, t_Stack_node **b)
{
	if (ft_stack_size(*a) < 2 && ft_stack_size(*b) < 2)
		return ;
	if (ft_stack_size(*a) > 1 && ft_stack_size(*b) > 1)
	{
		ft_rotate(a);
		ft_rotate(b);
		ft_print_rr();
	}
	else if (ft_stack_size(*a) > 1 && ft_stack_size(*b) < 2)
		ft_ra(a);
	else if (ft_stack_size(*a) < 2 && ft_stack_size(*b) > 1)
		ft_rb(b);
}
