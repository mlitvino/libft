/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:56:12 by mlitvino          #+#    #+#             */
/*   Updated: 2024/11/01 18:08:00 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_w(char const *s, char c)
{
	int	count;
	int	i;
	int	flag;

	count = 0;
	i = 0;
	flag = 1;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (flag == 1)
		{
			count++;
			flag = 0;
		}
		if (s[i] == c && flag == 0)
			flag = 1;
		i++;
	}
	return (count);
}

void	ft_skip_ch(char const *s, int *i, int *word_len, char c)
{
	while (s[*i] == c)
		(*i)++;
	while (s[*i] != c && s[*i])
	{
		(*word_len)++;
		(*i)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		word_len;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * ft_count_w(s, c));
	while (s[i])
	{
		word_len = 0;
		k = 0;
		ft_skip_ch(s, &i, &word_len, c);
		tab[j] = (char *)malloc(sizeof(char) * word_len + 1);
		while (k < word_len)
		{
			tab[j][k] = s[i - word_len + k];
			k++;
		}
		tab[j][k] = '\0';
		j++;
	}
	return (tab);
}
