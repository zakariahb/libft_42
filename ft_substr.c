/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalaksya <zalaksya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:28:09 by zalaksya          #+#    #+#             */
/*   Updated: 2024/11/19 12:28:00 by zalaksya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start || len == 0)
		return (ft_strdup(""));
	size = len + 1;
	if (s_len - start < len)
		size = s_len - start + 1;
	substr = malloc((size) * sizeof(char));
	if (!substr)
		return (NULL);
	s += start;
	ft_strlcpy(substr, s, size);
	return (substr);
}
