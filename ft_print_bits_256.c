/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits_256.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altuktam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 21:08:54 by altuktam          #+#    #+#             */
/*   Updated: 2018/08/01 21:11:13 by altuktam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bits_256(unsigned char octet)
{
	int		i;

	i = 256;
	while (i >= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
