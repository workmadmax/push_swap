/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:41:30 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 17:50:06 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Libera a memória alocada para o buffer e exibe
 * uma mensagem de erro.
 * 
 * @param buffer Ponteiro para o buffer a ser liberado.
 * @param list Ponteiro para a lista a ser liberada.
 */
void    cleanup_handle_error(char **buffer, t_chain *list)
{
    int index;

    index = 0;
    while (buffer[index])
        free(buffer[index++]);
    free(buffer);
    error_msg("Error clearing memory\n", list);
}
