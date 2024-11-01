/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:07:29 by mlitvino          #+#    #+#             */
/*   Updated: 2024/11/01 18:40:02 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_setch(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		left;
	int		right;
	int		s1_len;
	int		i;
	char	*s2;

	left = 0;
	right = 0;
	s1_len = ft_strlen(s1);
	right = s1_len - 1;
	while (ft_check_setch(s1[left], set) == 1)
		left++;
	while (ft_check_setch(s1[right], set) == 1)
		right--;
	s2 = malloc(sizeof(*s1) * (s1_len - left - (s1_len - right) + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (left != right)
	{
		s2[i++] = s1[left++];
	}
	s2[i] = '\0';
	return (s2);
}
