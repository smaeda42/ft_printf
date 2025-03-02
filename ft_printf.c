/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:40:17 by smaeda            #+#    #+#             */
/*   Updated: 2025/02/27 19:21:20 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(const char *fmt, va_list args)
{
	fmt++;
	if (*fmt == 'c')
		return (ft_print_c(va_arg(args, int)));
	if (*fmt == 's')
		return (ft_print_s(va_arg(args, char *)));
	if (*fmt == 'p')
		return (ft_print_p(va_arg(args, void *)));
	if (*fmt == 'i' || *fmt == 'd')
		return (ft_print_id(va_arg(args, int)));
	if (*fmt == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	if (*fmt == 'x')
		return (ft_print_x(va_arg(args, unsigned int)));
	if (*fmt == 'X')
		return (ft_print_X(va_arg(args, unsigned int)));
	if (*fmt == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		check;
	int		n;

	if (!fmt)
		return (-1);
	n = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			check = ft_specifier(fmt, args);
			if (check == -1)
			{
				va_end(args);
				return (-1);
			}
			n += check;
		}
		else
			n += write(1, fmt, 1);
		fmt++;
	}
	va_end(args);
	return (n);
}
