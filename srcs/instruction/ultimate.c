/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:11:02 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 13:46:30 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Executa uma rotação reversa nas duas
 * pilhas fornecidas.
 * 
 * @param stack_one Ponteiro para a primeira pilha.
 * @param stack_two Ponteiro para a segunda pilha.
 */
void    ult_rev_rotate(t_chain *stack_one, t_chain *stack_two)
{
    stack_one = rev_rotation(" ", stack_one);
    stack_two = rev_rotation(" ", stack_two);
    write(1, "rrr\n", 4);
}
/**
 * @brief Executa uma rotação nas duas pilhas fornecida.
 * 
 * @param stack_one Ponteiro para a primeira pilha.
 * @param stack_two Ponteiro para a segunda pilha.
 */
void    ult_rotate(t_chain *stack_one, t_chain *stack_two)
{
    stack_one = rotate(" ", stack_one);
    stack_two = rotate(" ", stack_two);
    write(1, "ss\n", 3);
}
/**
 * @brief Realiza uma troca nas duas pilhas fornecidas.
 * 
 * @param stack_one Ponteiro para a primeira pilha.
 * @param stack_two Ponteiro para a segunda pilha.
 */
void    ult_swap(t_chain *stack_one, t_chain *stack_two)
{
    stack_one = swap(" ", stack_one);
    stack_two = swap(" ", stack_two);
    write(1, "ss\n", 3);
}
