/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:54:41 by smaeda            #+#    #+#             */
/*   Updated: 2025/02/26 20:54:47 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_base(unsigned long long num, char *base)
{
	int					ret;
	unsigned long long	base_len;

	ret = 0;
	base_len = (unsigned long long)ft_strlen(base);
	if (un >= base_len)
		ret += ft_putnbr_unsigned_base(un / base_len, base);
	ret += write(1, &base[un % base_len], 1);
	return (ret);
}
