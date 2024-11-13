/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:42:36 by yassine           #+#    #+#             */
/*   Updated: 2024/11/13 11:33:31 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>


int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int ft_putstr(char * str);
int ft_putnbr(int n);
int ft_putunbr(unsigned long nb);

#endif