/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lower_idx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:29:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 14:40:59 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Encontra o índice do primeiro elemento em uma lista
 * lincada com valor mais baixo.
 * 
 * @param stack Ponteiro para o início da lista lincada.
 * @return size_t Índice do primeiro elemento com o valor mais
 * baixo, ou 0 se a lista lincada estiver vazia.
 */
size_t  get_lower_index(t_chain *stack)
{
    int         first_node;
    size_t      index;
    size_t      count;
    t_node      *helper;

    helper = stack->head;
    index = 0;
    count = 0;
    first_node = helper->data;
    while (helper)
    {
        if (first_node > helper->data)
        {
            count = 1;
            first_node = helper->data;
        }
        index++;
        helper = helper->next;
    }
    return (count);
}
