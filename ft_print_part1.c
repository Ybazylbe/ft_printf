/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_part1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:40:29 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/12/01 15:40:34 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(int arg)
{
	char	c;

	c = (char) arg;
	ft_putchar(c);
	return (1);
}

int	ft_put_s(char *arg)
{
	char	*str;

	str = (char *) arg;
	if (str == NULL)
	{
		return (ft_putstr("(null)"));
	}
	else
		return (ft_putstr(str));
}

int	ft_put_p(void *arg)
{
	unsigned long	p;

	p = (unsigned long) arg;
	if (p == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	ft_base(p, "0123456789abcdef");
	return (ft_count_base(p) + 2);
}

int	ft_put_d_i(int arg)
{
	int	n;

	n = arg;
	ft_putnbr(n);
	return (ft_count(n));
}

int	ft_put_u(unsigned int arg)
{
	unsigned int	n;

	n = (unsigned int) arg;
	ft_putnbr_pos(n);
	return (ft_count_pos(n));
}
