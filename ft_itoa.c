/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.C                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:37:49 by aminasya          #+#    #+#             */
/*   Updated: 2022/03/22 15:43:23 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	count;

	count = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	short int		len;
	unsigned int	num;

	len = ft_len(n);
	if (n < 0)
	{
		len++;
		num = n * -1;
	}
	else
		num = n;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
