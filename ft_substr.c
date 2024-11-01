/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:55:34 by mlitvino          #+#    #+#             */
/*   Updated: 2024/10/31 17:28:53 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	substr = malloc(sizeof(*str) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (str[start + i] && i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
