/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:56:29 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/18 15:30:11 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	z;
	size_t	k;
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	z = ft_strlen(src);
	k = ft_strlen(dst);
	if (dstsize < 1)
		return (z + dstsize);
	while (*(src + j) && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
		dst[i] = '\0';
	if (dstsize < k)
		return (z + dstsize);
	return (z + k);
}
