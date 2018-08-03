/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 21:21:38 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/02 21:22:15 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	if ((p = (void *)malloc(size * sizeof(*p))))
	{
		ft_bzero(p, size);
		return (p);
	}
	return (NULL);
}
