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

// Check where highest node is:
//		- firts node: do ft_sa()
//		- second node: do ft_rra() and if isn't ordered yet 
//		do ft_sa() (eg.: 2 3 1)
//		- third node: if middle node is higher than first do ft_sa() 
//		and ft_rra() (eg:. 3 2 1)
//		else do ft_ra() (eg.: 3 1 2)

void	ft_swap_3(t_Stack_node **stack)
{
	t_Stack_node	*highest;

	highest = ft_find_highest_node(*stack);
	if (ft_check_sorted(*stack) == 1)
		return ;
	if (*stack == highest)
		ft_sa(stack);
	else if ((*stack)->next == highest)
	{
		ft_rra(stack);
		if (ft_findlast(*stack)->value > (*stack)->next->value)
			ft_sa(stack);
	}
	if (ft_findlast(*stack) == highest)
	{
		if ((*stack)->value < (*stack)->next->value)
		{
			ft_sa(stack);
			ft_rra(stack);
		}
		else
			ft_ra(stack);
	}
}

// Function that pushes the smallest node from src to dest 
void	ft_push_smallest(t_Stack_node **src, t_Stack_node **dest)
{
	int				i;
	int				j;
	int				min;
	int				last;

	i = ft_stack_size(*src);
	while (i > 3)
	{
		j = i;
		while (j > 0)
		{
			last = ft_findlast(*src)->value;
			min = ft_find_smallest(*src)->value;
			if (min != last)
				ft_ra(src);
			j--;
		}
		ft_pb(src, dest);
		i--;
	}
}

// It work for 4 and 5 numbers
//It push to B on/two smallest nodes
// Sort remaining nodes in A and push back from B to A
void	ft_simple_swap(t_Stack_node **a, t_Stack_node **b)
{
	int	i;

	ft_push_smallest(a, b);
	ft_swap_3(a);
	i = ft_stack_size(*b);
	while (i > 0)
	{
		ft_pa(a, b);
		i--;
	}
}
