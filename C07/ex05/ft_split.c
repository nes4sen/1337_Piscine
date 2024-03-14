/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duskblade <duskblade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:23:16 by duskblade         #+#    #+#             */
/*   Updated: 2024/03/14 18:27:26 by duskblade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && !(ft_strchr(charset, str[i]))
			&& ft_strchr(charset, str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

void	ft_strncpy(char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (*src && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;
	char	**words;

	count = ft_count_words(str, charset);
	words = (char **)malloc(sizeof(char *) * count + 1);
	if (!words)
		return (NULL);
	i = 0;
	while (*str)
	{
		j = 0;
		while (*str && ft_strchr(charset, *str))
			str++;
		while (str[j] && !(ft_strchr(charset, str[j])))
			j++;
		words[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (!(words[i]))
			return (NULL);
		ft_strncpy(str, words[i++], j);
		str += j;
	}
	words[count] = NULL;
	return (words);
}
