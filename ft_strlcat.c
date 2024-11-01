/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:04 by mlitvino          #+#    #+#             */
/*   Updated: 2024/10/31 17:28:31 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	i;

	dest_l = 0;
	src_l = 0;
	i = 0;
	while (dest[dest_l])
		dest_l++;
	while (src[src_l])
		src_l++;
	if (size <= dest_l)
		return (size + src_l);
	while (src[i] && (dest_l + i) < (size - 1))
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = src[i];
	return (dest_l + src_l);
}
