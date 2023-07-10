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
	if (ft_push_node(a, b) == 1)
	    ft_print_pa();
}

void	ft_pb(t_Stack_node **a, t_Stack_node **b)
{
	if (ft_push_node(b, a) == 1)
	    ft_print_pb();
}
