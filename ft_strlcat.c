/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hss <silva>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:07:38 by hss               #+#    #+#             */
/*   Updated: 2025/07/30 15:07:38 by hss              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);

	if (destsize <= len_dest)
	{
		return (destsize + len_src);
	}
	else
	i = 0;
	while (src[i] != '\0' && (len_dest + i < destsize - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
