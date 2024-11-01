/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:44:26 by mlitvino          #+#    #+#             */
/*   Updated: 2024/10/31 17:28:00 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i++] = (char)c;
	}
	return (s);
}
