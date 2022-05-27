/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:01:07 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/27 05:11:17 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count ++;
	}
	if (size == 0)
		return (count);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (count);
}
