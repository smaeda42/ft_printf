/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:35:01 by smaeda            #+#    #+#             */
/*   Updated: 2025/02/23 19:06:41 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long num, char *base)
{
	int					ret;
	unsigned long long	un;

	ret = 0;
	base_len = (unsigned long long)ft_strlen(base);
	if (num < 0)
	{
		ret += write(1, '-', 1);
		un = (unsigned long long)(-(num + 1)) + 1;
	}
	else
		un = (unsigned long long)num;
	ret += ft_putnbr_unsigned_base(un, base);
	return (ret);
}
