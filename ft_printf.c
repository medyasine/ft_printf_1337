/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:42:33 by yassine           #+#    #+#             */
/*   Updated: 2024/11/13 11:03:02 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int my_helper(va_list ap, char c)
{
	int len;

	len = 0;
	if(c == '%')
		len += ft_putchar('%');
	else if(c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if(c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if(c == 'd')
		len +=  ft_putnbr(va_arg(ap, int));
	//else if(c == 'p')
	//else if(c == 'i')
	//else if(c == 'u')
	//else if(c == 'x')
	//else if(c == 'X')
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list ap;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			len += my_helper(ap, s[i + 1]);
		}
	}
	va_end(ap);
	return (len);
}