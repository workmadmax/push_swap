/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:38:31 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 18:44:34 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Classifica uma lista lincada de números inteiros
 * usando o algoritmo apropriado de acordo com o tamanho da lista.
 * 
 * @param stack_a Ponteiro para o início da lista lincada
 * a ser classificada.
 * @return t_chain* ponteiro para o início da lista lincada classificada.
 */
t_chain *choose_algorithm(t_chain *stack_a)
{
    if (check_sorted(stack_a))
        return (stack_a);
    if (stack_a->size == 2)
        swap("sa\n", stack_a);
    else if (stack_a->size == 3)
        sort_three(stack_a);
    else if (stack_a->size <= 50)
        sort_fifty(stack_a, stack_a->stack_b);
    else
        ft_radix(stack_a, stack_a->stack_b);
    return (stack_a);
}
