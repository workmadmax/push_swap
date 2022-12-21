/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:40:14 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:01:16 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Minha implementação do algoritmo radix sort.
 * 
 * @param stack_a A lista encadeada que armazena os elementos
 * a serem classificados.
 * @param stack_b A lista encadeada que armazena os elementos 
 * temporários.
 * @return Void function.
 */
void    ft_radix(t_chain *stack_a, t_chain *stack_b)
{
    int length;
    int index;
    int count;
    int max_bits;

    set_index(stack_a);
    length = stack_a->size;
    max_bits = get_bits(length - 1);
    index = 0;
    while (index < max_bits)
    {
        count = 0;
        while (count < length)
        {
            if ((stack_a->head->index >> index) & 1)
                rotate("ra\n", stack_a);
            else
                push("pb\n", stack_a, stack_b);
            count++;
        }
        index++;
        while (stack_b->head)
            push("pa\n", stack_a, stack_b);
    }
}
