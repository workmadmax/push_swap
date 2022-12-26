/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:08:53 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 14:15:12 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Converte uma string em número inteiro.
 * 
 * @param str A string a ser convertida em um número inteiro.
 * @param list Uma lista lincada usada em caso de erro.
 * @param cnt Indice da string a ser convertida.
 * @return int O número inteiro resultante da conversão.
 */
int	ft_atoi_list(char **str, t_chain *list, int count)
{
	int			index;
	long int	num[2];
	int			min;

	index = 0;
	num[0] = 0;
	min = 1;
	while (str[count][index] == ' ' || str[count][index] == '\n' || str[count][index] == '\t'
		|| str[count][index] == '\v' || str[count][index] == '\f' || str[count][index] == '\r')
		index++;
	if (str[count][index] == '+' || str[count][index] == '-')
		if (str[count][index++] == '-')
			min *= -1;
	while (str[count][index] >= 48 && str[count][index] <= 57)
	{
		num[1] = num[0] * 10 + (str[count][index] - 48);
		if (num[1] < num[0])
			cleanup_handle_error(str, list);
		num[0] = num[1];
		index++;
	}
	num[0] *= min;
	if (num[0] < INT_MIN || num[0] > INT_MAX)
		cleanup_handle_error(str, list);
	return (num[0]);
}