/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:11:19 by alcarden          #+#    #+#             */
/*   Updated: 2023/05/24 19:45:24 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*ptr;

	i = 0;
	size = ft_strlen(s);
	ptr = (char *)malloc(size * (sizeof(char)) + 1);
	if (!ptr)
		return (0);
	while (i < size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	size;
	unsigned int	i;
	unsigned int	x;

	size = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (0);
	i = 0;
	x = 0;
	while (i < size)
	{
		if (i < size - ft_strlen(s2))
			new[i] = s1[i];
		else
		{
			new[i] = s2[x];
			x++;
		}
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
