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

void	ft_pa(t_Stack *a, t_Stack *b)
{
	if (ft_is_empty(b) != 1 && ft_is_full(a) != 1)
	{
		ft_push(a, b->collection[b->top]);
		ft_pop(b);
	}
	ft_print_pa();
}

void	ft_pb(t_Stack *a, t_Stack *b)
{
	if (ft_is_empty(a) != 1 && ft_is_full(b) != 1)
	{
		ft_push(b, a->collection[a->top]);
		ft_pop(a);
	}
	ft_print_pb();
}
