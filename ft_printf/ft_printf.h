/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:10:18 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/23 14:12:16 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t  handle_str(const char *str);
size_t  handle_char(char c);
size_t  handle_num(long long nbr);
size_t  handle_hex(unsigned long x, int prefix, size_t cap);
size_t  handle_ptr(void *ptr, size_t *len);
size_t  ft_parse(va_list args, char format);
int ft_printf(const char *format, ...);

#endif