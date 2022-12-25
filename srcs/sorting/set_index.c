/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:15:14 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 14:18:35 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Atualiza o índice de cada node em uma lista.
 * 
 * @param stack_a A lista encadeada a ser atualizada.
 * @return t_chain* A lista encadeada atualizada.
 */
t_chain *set_index(t_chain *stack_a)
{
    size_t  idx;
    t_node  *min_idx;
    t_node  *temp;
    
    idx = 0;
    temp = stack_a->head;
    while (idx < stack_a->size)
    {
        min_idx = stack_a->head;
        temp = stack_a->head;
        while (temp)
        {
            if (min_idx->index != -1 && temp->index == -1)
                min_idx = temp;
            if (min_idx->data > temp->data && temp->index == -1)
                min_idx = temp;
            temp = temp->next;
        }
        min_idx->index = idx;
        idx++;
    }
    return (stack_a);
}
