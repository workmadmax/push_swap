/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:21:32 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 14:26:25 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Exibe uma mensagem de erro e termina a execução
 * do programa.
 * 
 * @param mensage String de mensagem de erro a ser exibida.
 * @param list Ponteiro para a estrutura de dados "t_chain"
 * que representa a lista lincada a ser liberada.
 */
void    error_msg(char *mensage, t_chain *list)
{
    write(2, mensage, ft_strlen(mensage));
    if (list)
        free_list(&list);
    exit (EXIT_FAILURE);
}
