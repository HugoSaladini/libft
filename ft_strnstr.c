/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hss <silva>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:27:40 by hss               #+#    #+#             */
/*   Updated: 2025/07/30 15:27:40 by hss              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && (i + j) < len && haystack[ i+ j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
