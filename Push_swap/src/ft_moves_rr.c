/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:38 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

//da cambiare swap tra nodi invece che valori
void	ft_rev_rotate(t_Stack_node **stack)
{
	int				i;
	int				temp;
	t_Stack_node	*node;

	i = 0;
	node = *stack;
	while (i < ft_stack_size(*stack) - 1)
	{
		if (i == ft_stack_size(*stack) - 2)
		{
			temp = node->value;
			node->value = ft_findlast(node)->value;
			ft_findlast(node)->value = temp;
		}
		else
		{
			temp = node->value;
			node->value = node->next->value;
			node->next->value = temp;
		}
		node = node->next;
		i++;
	}
}

void	ft_rra(t_Stack_node **a)
{
	if (ft_stack_size(*a) < 2)
		return ;
	ft_rev_rotate(a);
	ft_print_rra();
}

void	ft_rrb(t_Stack_node **b)
{
	if (ft_stack_size(*b) < 2)
		return ;
	ft_rev_rotate(b);
	ft_print_rrb();
}

void	ft_rrr(t_Stack_node **a, t_Stack_node **b)
{
	if (ft_stack_size(*a) < 2 && ft_stack_size(*b) < 2)
		return ;
	if (ft_stack_size(*a) > 1 && ft_stack_size(*b) > 1)
	{
		ft_rev_rotate(a);
		ft_rev_rotate(b);
		ft_print_rrr();
	}
	else if(ft_stack_size(*a) > 1 && ft_stack_size(*b) < 2)
		ft_rra(a);
	else if(ft_stack_size(*a) < 2 && ft_stack_size(*b) > 1)
		ft_rrb(b);
}
