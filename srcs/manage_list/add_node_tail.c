/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:24:40 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 14:55:22 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Adiciona um node com um determinado valor
 * e índice ao final de uma lista lincada.
 * 
 * @param list Ponteiro para o início da lista lincada.
 * @param data Dado a ser armazenado no novo node.
 * @param index Índice a  ser armazenado no novo node.
 * @return void* Ponteiro para o início da lista lincada
 * com o novo node adicionado.
 */
t_chain *add_node_tail(t_chain *list, int data, int index)
{
    t_node  *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node || !list)
        error_msg("Error in allocation\n", list);
    new_node->next = NULL;
    new_node->index = index;
    new_node->data = data;
    if (list->tail != NULL)
    {
        list->tail->next = new_node;
        new_node->prev = list->tail;
        list->tail = new_node;
    }
    else
    {
        list->tail = new_node;
        list->head = new_node;
        new_node->prev = NULL;
    }
    list->size++;
    return (list);
}
