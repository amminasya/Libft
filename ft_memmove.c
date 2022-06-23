/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:07:34 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/14 19:28:12 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc (len);
	if (!src || !dst)
		return (NULL);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(ptr + i) = *(const char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = *(ptr + i);
		i++;
	}
	free (ptr);
	return (dst);
}
