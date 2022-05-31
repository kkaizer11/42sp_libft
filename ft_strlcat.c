/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:58:33 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/31 03:28:57 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, 
// NUL-terminating the result.

// For strlcat() that means the initial length of dst plus the length of src.  While this may seem somewhat confusing, it was done to make trunca‐
// tion detection simple.

// Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the
// destination string will not be NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a
// string.  In practice this should not happen (as it means that either size is incorrect or that dst is not a proper “C” string).  The check ex‐
// ists to prevent potential security problems in incorrect code.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dst_len;
	unsigned int	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size != 0)
	{
		while (src[i] !='\0' && i < (size - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}