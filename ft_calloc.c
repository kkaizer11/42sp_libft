/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:27:33 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/04 05:30:33 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = (void *)malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmemb * size));
	return (memory);
}
