/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:23:22 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 20:06:04 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Analisa os argumentos passados para o programa
 * e adiciona os números inteiros contidos nesses
 * argumentos a uma lista lincada.
 * 
 * @param stack_a Ponteiro para o início da lista encadeada.
 * @param argv Matriz de argumentos passados para o programa.
 * @return t_chain* Ponteiro para o início da lista lincada,
 * com os números adicionados.
 */
t_chain *parse_arguments(t_chain *stack_a, char **argv)
{
    int     index;
    int     count;
    char    **buffer;

    index = 1;
    buffer = NULL;
    while (argv[index])
    {
        count = 0;
        if (argv[index][0])
            buffer = ft_split(argv[index], ' ');
        while (buffer[count])
        {
            if (buffer[count][0])
                add_node_tail(stack_a, ft_atoi_list(buffer, stack_a, count), -1);
            count++;
        }
        count = 0;
        while (buffer[count])
            free(buffer[count++]);
        free(buffer);
        index++;
    }
    check_duplicate_number(stack_a);
    return (stack_a);
}
