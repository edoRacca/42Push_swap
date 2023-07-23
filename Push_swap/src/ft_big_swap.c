/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:25:03 by eraccane          #+#    #+#             */
/*   Updated: 2023/07/23 12:25:05 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_end_rotation(t_Stack_node **stack, t_Stack_node *cheapest, char c)
{
	while (*stack != cheapest)
	{
		if (c == 'a')
		{
			if (cheapest->above_middle)
				ft_ra(stack);
			else
				ft_rra(stack);
		}
		else if(c == 'b')
		{
			if (cheapest->above_middle)
				ft_ra(stack);
			else
				ft_rra(stack);
		}
	}
}

void	ft_rev_double_rotation(t_Stack_node **a, t_Stack_node **b, 
													t_Stack_node *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		ft_rr(a, b);
	ft_set_position(*a);
	ft_set_position(*b);
}

void	ft_double_rotation(t_Stack_node **a, t_Stack_node **b, 
													t_Stack_node *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		ft_rrr(a, b);
	ft_set_position(*a);
	ft_set_position(*b);
}

void	ft_move_nodes(t_Stack_node **a, t_Stack_node **b)
{
	t_Stack_node	*cheapest;

	cheapest = ft_find_cheapest_node(*b);
	if (cheapest->above_middle && cheapest->target->above_middle)
		ft_double_rotation(a, b, cheapest);
	else if (!(cheapest->above_middle && cheapest->target->above_middle))
		ft_rev_double_rotation(a, b, cheapest);
	ft_end_rotation(b, cheapest, 'b');
	ft_end_rotation(a, cheapest->target, 'a');
	ft_pa(a, b);
}

void	ft_big_swap(t_Stack_node **a, t_Stack_node **b)
{
	int				size;
	t_Stack_node	*min;

	size = ft_stack_size(*a);
	while (size > 3)
	{
		ft_pb(a, b);
		size--;
	}
	ft_swap_3(a);
	while (*b)
	{
		ft_set_nodes(*a, *b);
		ft_move_nodes(a, b);
	}
	ft_set_position(*a);
	min = ft_find_smallest(*a);
	if (min->above_middle)
		while (*a != min)
			ft_ra(a);
	else
		while (*a != min)
			ft_rra(a);
}
