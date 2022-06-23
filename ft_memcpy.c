/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:11:19 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/21 19:45:24 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		*(char *)(dst + i) = *(const char *)(src + i);
		n--;
		i++;
	}
	return (dst);
}
