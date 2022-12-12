/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:56:12 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/23 14:06:33 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_parse(va_list args, char format)
{
    size_t  len;

    len = 0;
    if (format == 'c')
        len += handle_char(va_arg(args, int));
    if (format == 's')
        len += handle_str(va_arg(args, char *));
    if (format == 'p')
        len += handle_hex(va_arg(args, unsigned long long), 1, 0);
    if (format == 'd' || format == 'i')
        len += handle_num(va_arg(args, int));
    if (format == 'u')
        len += handle_num(va_arg(args, unsigned int));
    if (format == 'x')
        len += handle_hex(va_arg(args, unsigned int), 0, 0);
    if (format == 'X')
        len += handle_hex(va_arg(args, unsigned int), 0, 1);
    if (format == '%')
        len += handle_char('%');
    return (len);
}

int ft_printf(const char *format, ...)
{
    va_list arg;
    size_t  len;

    len = 0;
    va_start(arg, format);
    if (!format)
    {
        va_end(arg);
        return (0);
    }
    while (*format)
    {
        if (*format == '%')
            len += ft_parse(arg, *++format);
        else
            len += write(1, format, 1);
        format++;
    }
    va_end(arg);
    return (len);
}
