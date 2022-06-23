/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:29:52 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/22 15:49:49 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(ft_strlen(s1) + 1);
	while (i < ft_strlen(s1) && *s1)
	{
		*(new + i) = *(s1 + i);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
