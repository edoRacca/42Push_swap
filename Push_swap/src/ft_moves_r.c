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

void ft_ra(Stack *a)
{
    int i;
    int temp;

    i = a->size - 1;
    while (i > 0)
    {
        temp = a->collection[i];
        a->collection[i] = a->collection[i - 1];
        a->collection[i - 1] = temp;
        i--;
    }
    ft_print_ra();
}

void ft_rb(Stack *b)
{
    int i;
    int temp;

    i = b->size - 1;
    while (i > 0)
    {
        temp = b->collection[i];
        b->collection[i] = b->collection[i - 1];
        b->collection[i - 1] = temp;
        i--;
    }
    ft_print_rb();
}

void ft_rr(Stack *a, Stack *b)
{
    int i;
    int temp;

    i = a->size - 1;
    while (i > 0)
    {
        temp = a->collection[i];
        a->collection[i] = a->collection[i - 1];
        a->collection[i - 1] = temp;
        i--;
    }
    i = b->size - 1;
    while (i > 0)
    {
        temp = b->collection[i];
        b->collection[i] = b->collection[i - 1];
        b->collection[i - 1] = temp;
        i--;
    }
    ft_print_rr();
}