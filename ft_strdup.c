/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:10:27 by altuktam          #+#    #+#             */
/*   Updated: 2018/07/12 21:44:49 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ss1;
	int		len;

	len = ft_strlen(s1);
	if (!(ss1 = (char *)malloc(sizeof(*s1) * (len + 1))))
		return (NULL);
	ft_strcpy(ss1, s1);
	return (ss1);
}
