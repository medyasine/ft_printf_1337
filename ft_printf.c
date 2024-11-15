/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:42:33 by yassine           #+#    #+#             */
/*   Updated: 2024/11/15 11:41:16 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	my_helper(va_list ap, char c)
{
	int	len;

	len = 0;
	if (c == '%')
		len += ft_putchar('%');
	else if (c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		len += ft_putunbr(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_puthexa(va_arg(ap, unsigned int), c);
	else if (c == 'p')
		len = len + ft_putstr("0x") + ft_puthexa(va_arg(ap, unsigned long), c);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list ap;
	int i;
	int len;

	i = 0;
	len = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			len += my_helper(ap, s[i + 1]);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}