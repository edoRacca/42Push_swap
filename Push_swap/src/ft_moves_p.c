/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:13 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pa(t_Stack_node **a, t_Stack_node **b)
{
	int				popped;
	t_Stack_node	*lastb;

	if (*b == NULL || b == NULL)
		return ;
	lastb = ft_findlast(*b);
	popped = lastb->value;
	ft_add_node(a, ft_new_node(popped));
	ft_pop_node(b);
	ft_print_pa();
}

void	ft_pb(t_Stack_node **a, t_Stack_node **b)
{
	int				popped;
	t_Stack_node	*lasta;

	if (*a == NULL || a == NULL)
		return ;
	lasta = ft_findlast(*a);
	popped = lasta->value;
	ft_add_node(b, ft_new_node(popped));
	ft_pop_node(a);
	ft_print_pb();
}
