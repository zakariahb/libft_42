/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:26:07 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/20 17:45:13 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	unsigned const char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while (i < n -1 && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
