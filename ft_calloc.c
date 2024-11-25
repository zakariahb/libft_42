/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:54:48 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/21 08:59:45 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	*p;

	if (size && ((n * size) / size) != n)
		return (NULL);
	p = malloc (n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (size * n));
	return (p);
}
