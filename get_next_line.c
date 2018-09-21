/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:24:32 by dmsibi            #+#    #+#             */
/*   Updated: 2018/07/16 14:19:00 by dmsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	find_newline(char **line, char **str)
{
	char	*temp;
	char	*temp1;
	char	*c;

	temp = *str;
	temp1 = *str;
	c = ft_strchr(temp, '\n');
	*line = ft_strsub(temp, 0, c - temp);
	while (*temp)
		temp++;
	c++;
	*str = ft_strsub(temp1, c - temp1, temp - c);
	free(temp1);
	return (1);
}

int			ft_short(char **line, char **str)
{
	if (*str && ft_strlen(*str) > 0)
	{
		*line = *str;
		*str = NULL;
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*c[100];
	char		str[BUFF_SIZE + 1];
	char		*temp;
	int			i;

	if (line && fd >= 0 && read(fd, str, 0) == 0)
	{
		if (c[fd] != NULL && ft_strchr(c[fd], '\n'))
			return (find_newline(line, &c[fd]));
		while ((i = read(fd, str, BUFF_SIZE)) > 0)
		{
			if (c[fd] == NULL)
				c[fd] = ft_strdup("");
			str[i] = '\0';
			temp = c[fd];
			c[fd] = ft_strjoin(temp, str);
			free(temp);
			if (ft_strchr(c[fd], '\n') != NULL)
				return (find_newline(line, &c[fd]));
		}
		return (ft_short(line, &c[fd]));
	}
	return (-1);
}
