/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_part2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybazylbe <ybazylbe@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:39:51 by ybazylbe          #+#    #+#             */
/*   Updated: 2023/12/01 15:39:57 by ybazylbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pourcent(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_put_x_xx(unsigned int arg, const char min_or_maj)
{
	unsigned long long	n;

	n = (unsigned long long) arg;
	if (min_or_maj == 'x')
	{
		ft_base(n, "0123456789abcdef");
		return (ft_count_base(n));
	}
	else if (min_or_maj == 'X')
	{
		ft_base(n, "0123456789ABCDEF");
		return (ft_count_base(n));
	}
	return (0);
}
