/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:11:44 by eraccane          #+#    #+#             */
/*   Updated: 2023/07/19 10:11:45 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_swap_5(t_Stack_node **a, t_Stack_node **b, int min, int max)
{
	int	i;
	int	push;

	i = ft_stack_size(*b);
	while (i > 0)
	{
		push = ft_findlast(*b)->value;
		if (push == min)
			ft_pa(a, b);
		else if (push == max)
		{
			ft_rra(a);
			ft_pa(a, b);
		}
		else
		{
			if (!(push < ft_find_first(*a)->value && push < ft_findlast(*a)->value))
			{
				while (!(push > ft_find_first(*a)->value && push < ft_findlast(*a)->value))
					ft_ra(a);
			ft_pa(a, b);
			ft_ra(a);
			}
			else
				ft_pa(a, b);
		}
		i--;
	}
}

/* Check where highest node is:
	- firts node: do ft_sa()
	- second node: do ft_rra() and if isn't ordered yet i do ft_sa() (eg.: 2 3 1)
	- third node: if middle node is higher than first do ft_sa() and ft_rra() (eg:. 3 2 1)
	else do ft_ra() (eg.: 3 1 2)
*/
void	ft_swap_3(t_Stack_node **stack)
{
	t_Stack_node    *highest;

	highest = ft_find_highest_node(*stack);
	if (*stack == highest)
		ft_sa(stack);
	else if ((*stack)->next == highest)
	{
		ft_ra(stack);
		if (ft_findlast(*stack)->value > (*stack)->next->value)
			ft_sa(stack);
	}
	if (ft_findlast(*stack) == highest)
	{
		if ((*stack)->value < (*stack)->next->value)
		{
			ft_sa(stack);
			ft_ra(stack);
		}
		else
			ft_rra(stack);
	}
}

void	ft_simple_swap(t_Stack_node **a, t_Stack_node **b)
{
	int	i;
	int	min;
	int	max;
	
	min = ft_find_smallest(*a)->value;
	max = ft_find_highest_node(*a)->value;
	i = ft_stack_size(*a);
	while (i > 3)
	{
		ft_pb(a, b);
		i--;
	}
	ft_swap_3(a);
	ft_swap_5(a, b, min, max);
}