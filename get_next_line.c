/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:10:54 by alcarden          #+#    #+#             */
/*   Updated: 2023/05/24 22:17:33 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*stack;
	char		*buffer;
	char		*aux;
	int			bytes_read;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (bytes_read == -1)
		return (free(stack), free(buffer), 0);
	if(buffer[0] == '\0')
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(stack), free(buffer), 0);
		buffer[bytes_read] = '\0';
	}
}
