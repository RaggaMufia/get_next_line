/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:02:24 by dmsibi            #+#    #+#             */
/*   Updated: 2018/07/01 14:12:33 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*nul;

	nul = (unsigned char *)b;
	while (len)
	{
		*nul++ = (unsigned char)c;
		len--;
	}
	return (b);
}
