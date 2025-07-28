/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:21:50 by hda-silv          #+#    #+#             */
/*   Updated: 2025/07/28 13:32:26 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = ptr;
	i = 0;
	while (i < n)
	{
		dest[i++] = c;
	}
	return (dest);
}
