/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:46:16 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 19:30:47 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*ss;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] != '\0' && ft_isspace(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	while (s[end - 1] && ft_isspace(s[end - 1]))
		end--;
	ss = ft_strsub(s, start, end - start);
	if (ss)
		return (ss);
	return (0);
}
