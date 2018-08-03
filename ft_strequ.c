/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:44:49 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 18:46:05 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	const unsigned char *ss1 = (const unsigned char *)s1;
	const unsigned char *ss2 = (const unsigned char *)s2;

	if (!ss1 || !ss2)
		return (0);
	while (*ss1 == *ss2)
	{
		if (*ss1 == '\0' && *ss2 == '\0')
			return (1);
		ss1++;
		ss2++;
	}
	return (0);
}
