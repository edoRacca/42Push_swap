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

void ft_rra(Stack *a)
{
    int i;
    int temp;

    i = 0;
    while (i < a->size - 1)
    {
        temp = a->collection[(i % a->top) + 1];
        a->collection[(i % a->top) + 1] = a->collection[i % a->top];
        a->collection[i % a->top] = temp;
        i++;
    }
    ft_print_rra();
}

void ft_rrb(Stack *b)
{
    int i;
    int temp;

    i = 0;
    while (i < b->size - 1)
    {
        temp = b->collection[(i % b->top) + 1];
        b->collection[(i % b->top) + 1] = b->collection[i % b->top];
        b->collection[i % b->top] = temp;
        i++;
    }
    ft_print_rrb();
}

void ft_rrr(Stack *a, Stack *b)
{
    int i;
    int temp;

    i = 0;
    while (i < a->size - 1)
    {
        temp = a->collection[(i % a->top) + 1];
        a->collection[(i % a->top) + 1] = a->collection[i % a->top];
        a->collection[i % a->top] = temp;
        i++;
    }
    i = 0;
    while (i < b->size - 1)
    {
        temp = b->collection[(i % b->top) + 1];
        b->collection[(i % b->top) + 1] = b->collection[i % b->top];
        b->collection[i % b->top] = temp;
        i++;
    }
    ft_print_rrr();
}