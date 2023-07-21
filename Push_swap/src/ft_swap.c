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

// void	ft_simple_rotation(t_Stack_node **a, t_Stack_node **b, int min, int push)
// {
// 	if (push < ft_find_first(*a)->value && push < ft_findlast(*a)->value)
// 				ft_pa(a, b);
// 	else
// 	{
// 		while (!(push > ft_find_first(*a)->value && push < ft_findlast(*a)->value))
// 			ft_ra(a);
// 		ft_pa(a, b);
// 		while (min != ft_findlast(*a)->value)
// 			ft_ra(a);
// 	}
// }

// void	ft_swap_5(t_Stack_node **a, t_Stack_node **b, int min, int max)
// {
// 	int	i;
// 	int	push;

// 	i = ft_stack_size(*b);
// 	ft_print_stack(*a);
// 	ft_printf("\n");
// 	while (i > 0)
// 	{
// 		push = ft_findlast(*b)->value;
// 		if (push == min)
// 			ft_pa(a, b);
// 		else if (push == max)
// 		{
// 			ft_pa(a, b);
// 			ft_ra(a);
// 		}
// 		else
// 		{
// 			ft_simple_rotation(a, b, min, push);
// 		}
// 		ft_print_stack(*a);
// 		ft_printf("\n");
// 		ft_printf("\n");
// 		ft_print_stack(*b);
// 		i--;
// 	}
// }

/* Check where highest node is:
*	- firts node: do ft_sa()
*	- second node: do ft_rra() and if isn't ordered yet i do ft_sa() (eg.: 2 3 1)
*	- third node: if middle node is higher than first do ft_sa() and ft_rra() (eg:. 3 2 1)
*	else do ft_ra() (eg.: 3 1 2)
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

void	ft_simple_swap(t_Stack_node **a, t_Stack_node **b)
{
	int				i;
	int				j;
	int				min;
	int				last;
	t_Stack_node	*node;
	
	i = ft_stack_size(*a);
	j = i;
	while (i > 3)
	{
		node = *a;
		min = ft_find_smallest(node);
		ft_printf("min: %d\n", min);
		last = ft_findlast(*a)->value;
		ft_printf("last: %d\n", last);
		while (j > 0)
		{
			last = ft_findlast(*a)->value;
			min = ft_find_smallest(*a);
			if (min != last)
				ft_ra(a);
			else
				break ;
			j--;
		}
		ft_pb(a, b);
		i--;
	}
	(void)b;
}
