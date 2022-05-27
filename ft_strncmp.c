/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:22:01 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/28 00:55:42 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	subtraction;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n --;
	}
	subtraction = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (subtraction);
}
