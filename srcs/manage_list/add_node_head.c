/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_head.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:49:56 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 17:35:00 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Adiciona um novo node no início de uma lista lincada.
 * 
 * @param list Ponteiro para a estrutura de dados "t_chain" que
 * representa a lista lincada.
 * @param data Valor inteiro a ser armazenado no novo node.
 * @param index Índice inteiro a ser armazenado no novo node.
 * @return t_chain* Ponteiro para a estrutura de dados que
 * representa a lista lincada.
 */
t_chain *add_node_head(t_chain *list, int data, int index)
{
    t_node  *new_node;

    new_node = malloc(sizeof(t_chain));
    if (!new_node || !list)
        error_msg("Error in allocation\n", list);
    new_node->prev = NULL;
    new_node->data = data;
    new_node->index = index;
    if (list->head != NULL)
    {
        list->head->prev = new_node;
        new_node = list->head;
        list->head = new_node;
    }
    else
    {
        list->tail = new_node;
        list->head = new_node;
        new_node = NULL;
    }
    list->size++;
    return (list);
}
