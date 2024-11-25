/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:53:00 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/21 09:08:16 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	unsigned const char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned const char *)src;
	if (ds == sr)
		return (ds);
	if (ds > sr)
	{
		while (len--)
		{
			ds[len] = sr[len];
		}
	}
	else
	{
		ft_memcpy(ds, src, len);
	}
	return (dst);
}
