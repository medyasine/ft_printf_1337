/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:16:15 by masnus            #+#    #+#             */
/*   Updated: 2024/11/15 12:49:18 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long hexa, char format)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (hexa >= 16)
		len += ft_puthexa(hexa / 16, format);
	len += ft_putchar(base[hexa % 16]);
	return (len);
}
