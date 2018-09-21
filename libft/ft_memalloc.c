/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:50:16 by dmsibi            #+#    #+#             */
/*   Updated: 2018/06/30 15:13:43 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*space;

	if (!(space = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(space, size);
	return (space);
}
