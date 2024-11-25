/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:04:35 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/20 17:57:03 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	src_len = ft_strlen(src);
	if (!dest && dest_size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (src_len + dest_size);
	i = dest_len;
	while (src[j] && (i + 1 < dest_size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
