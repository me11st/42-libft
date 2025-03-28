/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:08:45 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:08:47 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char dest[20] = "Hello, ";

    const char *src = "World!";

    size_t size = sizeof(dest);

    printf("Before strlcat: %s\n", dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("After strlcat: %s\n", dest);
    printf("Return value: %zu\n", result);

    return 0;
}
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (size > 0 && dest_len < size - 1)
	{
		while (src[i] && dest_len + i < size -1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
