/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 10:05:18 by dmsibi            #+#    #+#             */
/*   Updated: 2018/06/28 17:47:24 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned char	*sp;

	i = 0;
	st = (unsigned char *)src;
	sp = (unsigned char *)dst;
	while (i < n)
	{
		sp[i] = st[i];
		i++;
	}
	return (dst);
}
