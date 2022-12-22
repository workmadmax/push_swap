/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:23:04 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/22 18:26:57 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Verifica se os argumentos passados para o
 * programa possuem pelo menos um dígito.
 * 
 * @param argc Número de argumentos passado para o programa.
 * @param argv Array de strings com os argumentos passados
 * para o programa.
 */
void    check_digits_presence(int argc, char **argv)
{
    int index;
    int count;
    int iterator;
    
    index = 1;
    while (index < argc)
    {
        count = 0;
        iterator = 0;
        while (argv[index][count])
        {
            if (ft_isdigit(argv[index][count]))
                iterator++;
            count++;
        }
        if (!iterator)
            error_msg("Error;", NULL);
        index++;
    }
}
