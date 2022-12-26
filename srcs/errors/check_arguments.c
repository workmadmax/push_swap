/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:00:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 16:14:44 by mdouglas         ###   ########.fr       */
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
void	check_arguments(int num_args, char **args)
{
	int	index;
	int	count;

	index = 1;
	while (index < num_args)
	{
		count = 0;
		if (!args[index][count])
			error_msg("Error\n", NULL);
		while (args[index][count])
		{
			if (args[index][count] == '-' || args[index][count] == '+')
			{
				if (!ft_isdigit(args[index][count + 1]) || ft_isdigit(args[index][count - 1]))
					error_msg("Error\n", NULL);
			}
			else if (!ft_isdigit(args[index][count]) && args[index][count] != ' ')
				error_msg("Error\n", NULL);
			count++;
		}
		index++;
	}
	check_digits_presence(num_args, args);
}
