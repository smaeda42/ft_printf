/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:14:48 by smaeda            #+#    #+#             */
/*   Updated: 2025/02/24 20:06:40 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long p)
{
	int	ret;

	ret = 0;
	if (n == 0)
	{
		ret += write(1, "(nil)", 5);
		return (ret);
	}
	ret += write(1, "0x", 2);
	ret += ft_putnbr_base(n, BASE16_LOW);
	return (ret);
}
