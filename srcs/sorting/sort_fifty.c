/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fifty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:41:40 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 11:51:57 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Ordena uma pilha de node máximo de 50 elementos
 * em duas pilhas.
 * 
 * @param stack_a Ponteiro para a pilha de elementos a serem ordenados.
 * @param stack_b Ponteiro para a pilha auxiliar.
 */
void    sort_fifty(t_chain *stack_a, t_chain *stack_b)
{
    size_t  low_index;
    
    while (stack_a->size > 3)
    {
        low_index = get_lower_index(stack_a);
        if (low_index > stack_a->size / 2)
            while (get_lower_index(stack_a) != 0)
                rev_rotate("rra\n", stack_a);
        else
            while (get_lower_index(stack_a) != 0)
                rotate("ra\n", stack_a);
        push("pb\n", stack_a, stack_b);
    }
    sort_three(stack_a);
    while (stack_b->head)
        push("pa\n", stack_b, stack_a);
}
