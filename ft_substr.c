/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 02:28:55 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/30 17:58:49 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1);
	if (!str)
		return (NULL);
}