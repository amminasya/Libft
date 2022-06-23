/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:31:43 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/18 15:34:24 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	z;

	z = ft_strlen(src);
	if (dstsize == 0)
		return (z);
	while (*src && dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*(dst) = '\0';
	return (z);
}
