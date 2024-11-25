/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:01:20 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/16 12:50:51 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	num;

	num = n;
	len = ft_num_len(num);
	p = malloc(len + 1);
	if (!p)
		return (0);
	p[len--] = '\0';
	if (num == 0)
		p[0] = '0';
	if (num < 0)
	{
		p[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		p[len--] = num % 10 + 48;
		num /= 10;
	}
	return (p);
}
