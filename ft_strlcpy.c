/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:06:29 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/21 09:52:28 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dest == NULL && dest_size == 0)
		return (src_len);
	while (src[i] && i < dest_size - 1 && dest_size)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size)
		dest[i] = '\0';
	return (src_len);
}
