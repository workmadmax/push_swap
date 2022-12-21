/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:11:10 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:24:16 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Move um node de uma lista encadeada para outra.
 * 
 * @param character A string que contém o comando a ser executado.
 * @param source A lista encadeada de onde o node será movido.
 * @param dest A lista encadeada para onde o node será movido.
 * @return t_chain* A lista encadeada de "destino" atualizada
 * com o novo node.
 */
t_chain *push(char *character, t_chain *source, t_chain *dest)
{
    t_node  *temp;
    
    write(1, character, ft_strlen(character));
    if (source->head == NULL)
        return (dest);
    dest = add_node_tail(dest, source->head, source->head->index);
    if (source->size == 1)
    {
        free(source->head);
        source->head = NULL;
        source->tail = NULL;
    }
    else
    {
        temp = source->head;
        source->head = source->head->next;
        source->head->prev = NULL;
        free(temp);
    }
    source->size--;
    return (dest);
}
