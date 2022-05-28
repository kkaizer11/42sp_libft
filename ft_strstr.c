/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 01:41:17 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/28 05:11:10 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;
	int		i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *) haystack);
	while (haystack[i] != '\0')
	{
		if (ft_strncmp(haystack, needle, i) == 0)
		{
			return ((char *)(haystack + i));
		}
		i ++;
	}
	return (0);
}
