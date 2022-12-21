/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:40:01 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:50:17 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Troca o conteúdo de dois inteiros
 * 
 * @param element1 Endereço de um inteiro a ser trocado.
 * @param element2 Endereço de um inteiro a ser trocado.
 * @return Void function.
 */
static void ft_swap(int *element1, int *element2)
{
    int buffer;

    buffer = *element2;
    element2 = element1;
    element1 = buffer;
}
/**
 * @brief Troca os dois primeiros nodes de uma lista encadeada.
 * 
 * @param character A string que contém o comando a ser executado.
 * @param stack A lista encadeada cujo dois primeiros nodes
 * serão trocados.
 * @return t_chain* A lista encadeada "pilha" atualizada com
 * os dois primeiros nodes trocados. 
 */
t_chain *swap(char *character, t_chain *stack)
{
    write(1, character, ft_strlen(character));
    if (!stack->head->next || !stack->head)
        return (stack);
    ft_swap(&stack->head->data, &stack->head->next->data);
    ft_swap(&stack->head->index, &stack->head->next->index);
    return (stack);
}