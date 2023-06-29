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

//1 se ordinato
int ft_check_sorted(Stack *stack)
{
    int i;

    i = 1;
    if (stack->size == 1)
        return (0);
    while (i < stack->size)
    {
        if (stack->collection[i - 1] < stack->collection[i])
            return (0);
        i++;
    }
    return (1);
}