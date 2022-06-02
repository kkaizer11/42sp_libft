/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:37:17 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/02 19:05:27 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*s_dst;
	unsigned char	*s_src;

	
	s_dst = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	i = 0;
	if (!dest || !src)
		return (dest);
	if (s_dst < s_src)
	{
		while (i < n)
		{
			s_dst[i] = s_src[i];
			i ++;
		}
	}
	else
		ft_memcpy(s_dst, s_src, n);
	return (s_dst);
}
