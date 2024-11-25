/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 05:43:25 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/21 09:36:11 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*des;
	unsigned const char		*sr;

	des = (unsigned char *)dest;
	sr = (unsigned const char *)src;
	i = 0;
	if (des == sr)
		return (des);
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
