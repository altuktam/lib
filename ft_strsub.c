/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 19:52:52 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 18:48:39 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	const char	*src;
	size_t		i;

	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (0);
	src = &s[start];
	i = 0;
	while (src[i] && i < len)
	{
		str[i] = src[i];
		i++;
	}
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
