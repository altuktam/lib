/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:09:20 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 20:49:56 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*z;
	unsigned char	b;
	size_t			i;

	i = 0;
	z = (unsigned char *)s;
	b = (unsigned char)c;
	while (n)
	{
		if (z[i] == b)
			return (z + i);
		i++;
		n--;
	}
	return (NULL);
}
