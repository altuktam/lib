/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 19:34:10 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 19:34:43 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*constr;

	constr = NULL;
	if (!s1 || !s2 ||
			!(constr = (ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	constr = ft_strcpy(constr, s1);
	constr = ft_strcat(constr, s2);
	return (constr);
}
