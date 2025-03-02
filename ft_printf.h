/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaeda <smaeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:14:10 by smaeda            #+#    #+#             */
/*   Updated: 2025/02/26 18:49:10 by smaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE16_UP "0123456789ABCDEF"
# define BASE16_LOW "0123456789abcdef"
# define BASE10 "0123456789"

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

int	ft_print_c(int c);
int	ft_print_id(int num);
int	ft_print_p(unsigned long long p);
int	ft_print_s(char *str);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned int n);
int	ft_print_larx(unsigned int n);
int	ft_putnbr_base(long long num, char *base);
int	ft_putnbr_unsigned_base(unsigned long long num, char *base);

#endif