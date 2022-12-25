/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:14:40 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 14:37:12 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Cria uma nova lista lincada.
 * 
 * @param list Ponteiro para a estrutura de dados "t_chain"
 * que representa a lista lincada filha.
 * @return t_chain* Ponteiro para a estrutura de dados "t_chain"
 * que representa a nova lista.
 */
t_chain *create_new_list(t_chain *list)
{
    t_chain *new_list;
    
    new_list = malloc(sizeof(t_chain));
    if (!new_list)
        error_msg("Error in allocation\n", NULL);
    new_list->size = 0;
    new_list->tail = NULL;
    new_list->head = NULL;
    new_list->stack_b = list;
    return (new_list);
}
