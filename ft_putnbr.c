/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 21:09:12 by mtopor            #+#    #+#             */
/*   Updated: 2017/11/27 21:09:41 by mtopor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int		ct;
	int		a[15];
	long	nb2;

	nb2 = nb;
	ct = 0;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 *= (-1);
	}
	while (nb2 > 9)
	{
		a[ct++] = nb2 % 10;
		nb2 = nb2 / 10;
	}
	a[ct] = nb2;
	while (ct >= 0)
	{
		ft_putchar(a[ct] + '0');
		ct--;
	}
}
