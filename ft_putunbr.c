/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:59:02 by yassine           #+#    #+#             */
/*   Updated: 2024/11/15 12:50:05 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + 48);
	return (len);
}
