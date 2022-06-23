/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:22:08 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/22 16:03:56 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbofwords(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_strlenword(char *str, char c)
{
	int	count;

	count = 0;
	while (*str != c && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

static void	*my_free(char **arr, int i)
{
	while (i-- > 0)
	{
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	let_count;
	char	**arr;
	int		cur_arr;

	arr = (char **)malloc(ft_nbofwords((char *)s, c) * sizeof(char *) + 1);
	if (!arr)
		return (NULL);
	cur_arr = 0;
	while (ft_nbofwords((char *)s, c))
	{
		while (*s == c && *s)
			s++;
		let_count = ft_strlenword((char *)s, c);
		arr[cur_arr] = ft_substr((char *)s, 0, let_count);
		if (!arr[cur_arr])
			return (my_free(arr, cur_arr));
		s = s + let_count;
		cur_arr++;
	}
	arr[cur_arr] = NULL;
	return (arr);
}
