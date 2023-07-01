/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 11:11:13 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_three_middle(t_Stack *a)
{
	if (a->collection[0] < a->collection[2])
		ft_rra(a);
	else
	{
		ft_sa(a);
		ft_ra(a);
	}
}

void	ft_one_middle(t_Stack *a)
{
	if (a->collection[0] > a->collection[2])
		ft_sa(a);
	else
		ft_ra(a);
}

void	ft_sort_3(t_Stack *a)
{
	if (ft_check_sorted(a) == 1)
		return ;
	if (a->collection[1] < a->collection[0] && 
		a->collection[1] < a->collection[2])
		ft_one_middle(a);
	if (a->collection[1] > a->collection[0] && 
		a->collection[1] < a->collection[2])
	{
		ft_sa(a);
		ft_rra(a);
	}
	if (a->collection[1] > a->collection[0] && 
		a->collection[1] > a->collection[2])
		ft_three_middle(a);
}
