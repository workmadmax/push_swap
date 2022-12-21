/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:53 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:38:57 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Rotaciona os node de uma lista encadeada em
 * sentido horário.
 * 
 * @param character A string que contém o comando a
 * ser executado. 
 * @param stack A lista encadeada cujos nodes serão
 * rotacionados.
 * @return t_chain* A lista encadeada "pilha" atualizada
 * com os nodes rotacionados.
 */
t_chain *rotate(char *character, t_chain *stack)
{
    t_node  *temp;

    write(1, character, ft_strlen(character));
    if (stack->size > 1)
    {
        temp = stack->head->next;
        stack->head->next = NULL;
        stack->head->prev = stack->tail;
        stack->tail->next = stack->head;
        stack->tail = stack->head;
        stack->head = temp;
        temp->prev = NULL;
    }
    return (stack);
}
