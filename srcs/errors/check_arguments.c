/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:00:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 15:41:55 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Verifica se os argumentos passados para o programa
 * são válidos.
 * 
 * @param argc Número de argumentos passados para o programa.
 * @param argv Array de strings com os argumentos passados
 * para o programa.
 */
void    check_arguments(int argc, char **argv)
{
    int index;
    int count;

    index = 1;
    if (argc == 1)
        error_msg("Error:\n", NULL);
    while (index < argc)
    {
        count = 0;
        if (!argv[index][count])
            error_msg("Error:\n", NULL);
        while (argv[index][count])
        {
            if (argv[index][count] == '-' || argv[index][count] == '+')
            {
                if (!ft_isdigit(argv[index][count + 1]) || ft_isdigit(argv[index][count - 1]))
                    error_msg("Error: Invalid argument format\n", NULL);
            }
            else if (!ft_isdigit(argv[index][count]) && argv[index][count] != ' ')
                error_msg("Error: Invalid characters in argument\n", NULL);
            count++;
        }
        index++;
    }
    check_digits_presence(argc, argv);
}
