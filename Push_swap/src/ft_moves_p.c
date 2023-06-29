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

void ft_pa(Stack *a, Stack *b)
{
    if (ft_isEmpty(b) != 1 && ft_isFull(a) != 1)
    {
        ft_push(a, b->collection[b->top]);
        ft_pop(b);
    }
    ft_print_pa();
}

void ft_pb(Stack *a, Stack *b)
{
    if (ft_isEmpty(a) != 1 && ft_isFull(b) != 1)
    {
        ft_push(b, a->collection[a->top]);
        ft_pop(a);
    }
    ft_print_pb();
}