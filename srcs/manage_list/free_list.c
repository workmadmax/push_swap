/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:08:01 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 14:13:20 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Libera a memória alocada para uma lista lincada e suas
 * estruturas de dados filhas.
 * 
 * @param list Ponteiro duplo para a estrutura de dado "t_chain"
 * que representa a lista lincada.
 */
void    free_list(t_chain **list)
{
    t_node  *temp;
    t_node  *del;

    if (*list == NULL)
        return ;
    if ((*list)->stack_b)
    {
        free_list(&(*list)->stack_b);
        (*list)->stack_b = NULL;
    }
    temp = (*list)->head;
    while (temp)
    {
        del = temp;
        temp = temp->next;
        free(del);
    }
    free(*list);
    *list = NULL;
}
