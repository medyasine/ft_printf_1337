/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:42:36 by yassine           #+#    #+#             */
/*   Updated: 2024/11/15 11:41:29 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_F
# define PRINT_F

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int nb);
int	ft_puthexa(unsigned long hexa, char format);

#endif