/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:40:42 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/12/01 15:40:46 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv(char c, va_list args)
{
	if (c == 'c')
		return (ft_put_c(va_arg(args, int)));
	if (c == 's')
		return (ft_put_s(va_arg(args, char *)));
	if (c == 'p')
		return (ft_put_p(va_arg(args, void *)));
	if (c == 'd')
		return (ft_put_d_i(va_arg(args, int)));
	if (c == 'i')
		return (ft_put_d_i(va_arg(args, int)));
	if (c == 'u')
		return (ft_put_u(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_put_x_xx(va_arg(args, unsigned long long), 'x'));
	if (c == 'X')
		return (ft_put_x_xx(va_arg(args, unsigned long long), 'X'));
	if (c == '%')
		return (ft_put_pourcent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	size_t	i;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_conv(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
