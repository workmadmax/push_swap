/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:38:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 18:52:09 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Verifica se uma lista encadeada está em
 * ordem crescente.
 * 
 * @param stack_a A lista encadeada a ser verificada.
 * @return int 1 se a lista estiver ordenada, 0 caso contrário.
 */
int check_sorted(t_chain *stack_a)
{
    t_node  *helper;

    helper = stack_a->head;
    while (helper->next)
    {
        if (helper->data < helper->next->data)
            helper = helper->next;
        else
            return (0);
    }
    return (1);
}
