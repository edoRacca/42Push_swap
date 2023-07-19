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

// void	ft_swap(t_Stack_node **a, t_Stack_node **b)
// {

// }