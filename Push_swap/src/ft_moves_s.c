/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:48 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_swap_2(t_Stack_node **stack)
{
	t_Stack_node	*seclast;
	t_Stack_node	*last;
	int				temp;

	seclast = *stack;
	while (seclast->next->next != NULL)
		seclast = seclast->next;
	last = ft_findlast(*stack);
	temp = last->value;
	last->value = seclast->value;
	seclast->value = temp;
}

void	ft_sa(t_Stack_node **a)
{

	if (ft_stack_size(*a) < 2)
		return ;
	ft_swap_2(a);
	ft_print_sa();
}

void	ft_sb(t_Stack_node **b)
{
	if (ft_stack_size(*b) < 2)
		return ;
	ft_swap_2(b);
	ft_print_sb();
}

void	ft_ss(t_Stack_node **a, t_Stack_node **b)
{
	if (ft_stack_size(*a) < 2 && ft_stack_size(*b) < 2)
		return ;
	if (ft_stack_size(*a) > 1 && ft_stack_size(*b) > 1)
	{
		ft_swap_2(a);
		ft_swap_2(b);
		ft_print_ss();
	}
	else if(ft_stack_size(*a) > 1 && ft_stack_size(*b) < 2)
		ft_sa(a);
	else if(ft_stack_size(*a) < 2 && ft_stack_size(*b) > 1)
		ft_sb(b);
}
