/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 17:58:17 by dmsibi            #+#    #+#             */
/*   Updated: 2018/06/29 17:58:29 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int mnb;

	if (nb < 0)
	{
		ft_putchar('-');
		mnb = -nb;
	}
	else
		mnb = nb;
	if (mnb >= 10)
	{
		ft_putnbr(mnb / 10);
		ft_putnbr(mnb % 10);
	}
	else if (mnb < 10)
	{
		ft_putchar(mnb + '0');
	}
}
