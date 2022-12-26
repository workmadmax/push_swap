/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lower_idx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:29:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 11:39:21 by mdouglas         ###   ########.fr       */
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
    int         lower_idx;
    size_t      index;
    size_t      count;
    t_node      *helper;

    helper = stack->head;
    index = 0;
    count = 0;
    lower_idx = helper->data;
    while (helper)
    {
        if (lower_idx > helper->data)
        {
            count = 1;
            lower_idx = helper->data;
        }
        index++;
        helper = helper->next;
    }
    return (count);
}
