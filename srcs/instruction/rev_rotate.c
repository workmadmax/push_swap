/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:26:20 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:32:26 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Rotaciona os nós de uma lista encadeada em sentido
 * anti-horário.
 * 
 * @param character A string que contém o comando a ser executado
 * @param stack A lista encadeada cujos nodes serão rotacionados.
 * @return t_chain* A lista encadeada "pilha" atualizada com os nós
 * rotacionados.
 */
t_chain *rev_rotation(char *character, t_chain *stack)
{
    t_node  *temp;

    write(1, character, ft_strlen(character));
    if (stack->size <= 1)
        return (stack);
    temp = stack->tail->prev;
    stack->tail->prev = NULL;
    stack->tail->next = stack->head;
    stack->head->prev = stack->tail;
    stack->head = stack->tail;
    stack->tail = temp;
    temp->next = NULL;
    return (stack);
}
