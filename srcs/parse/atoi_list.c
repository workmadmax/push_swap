/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:08:53 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 12:38:23 by mdouglas         ###   ########.fr       */
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
int ft_atoi_list(char **str, t_chain *list, int cnt)
{
	int			idx;
	long int	num[2];
	int			min;

	idx = 0;
	num[0] = 0;
	min = 1;
	while (str[cnt][idx] == ' ' || str[cnt][idx] == '\n' || str[cnt][idx] == '\t'
		|| str[cnt][idx] == '\v' || str[cnt][idx] == '\f' || str[cnt][idx] == '\r')
		idx++;
	if (str[cnt][idx] == '+' || str[cnt][idx] == '-')
		if (str[cnt][idx++] == '-')
			min *= -1;
	while (str[cnt][idx] >= 48 && str[cnt][idx] <= 57)
	{
		num[1] = num[0] * 10 + (str[cnt][idx] - 48);
		if (num[1] < num[0])
			cleanup_handle_error(str, list);
		num[0] = num[1];
		idx++;
	}
	num[0] *= min;
	if (num[0] < LONG_MIN || num[0] > LONG_MAX)
		cleanup_handle_error(str, list);
	return (num[0]);
}
