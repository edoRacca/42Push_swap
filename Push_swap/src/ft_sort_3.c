/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/17 11:50:36 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void ft_sort_3(Stack *a)
{
    if (ft_check_sorted(a) == 1)
        return ;
    if (a->collection[1] < a->collection[0] && a->collection[1] < a->collection[2])
    {
        if (a->collection[0] > a->collection[2])
            ft_sa(a);
        else
            ft_ra(a);
    }
    if (a->collection[1] > a->collection[0] && a->collection[1] < a->collection[2])
    {
        ft_sa(a);
        ft_rra(a);
    }
    if (a->collection[1] > a->collection[0] && a->collection[1] > a->collection[2])
    {
        if (a->collection[0] < a->collection[2])
            ft_rra(a);
        else
        {
            ft_sa(a);
            ft_ra(a);
        }
    }
}