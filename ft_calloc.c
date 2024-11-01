/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:26:37 by mlitvino          #+#    #+#             */
/*   Updated: 2024/11/01 12:27:44 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	size_t		i;

	i = 0;
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		((char *)ptr)[i++] = '\0';
	}
	return (ptr);
}
