/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hss <silva>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:05:37 by hss               #+#    #+#             */
/*   Updated: 2025/07/30 16:05:37 by hss              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			sum;
	unsigned char	*ptr;

	sum = count * size;
	ptr = malloc(sum);
	if (ptr == 0)
		return (0);

	i = 0;
	while (i < sum)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
