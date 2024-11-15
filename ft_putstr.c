/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:59:13 by yassine           #+#    #+#             */
/*   Updated: 2024/11/15 11:41:57 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
	{
		len += ft_putstr("(null)");
	}
	else
	{
		while (str[i])
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
	return (len);
}
