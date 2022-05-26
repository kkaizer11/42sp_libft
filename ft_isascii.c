/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:02:31 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 17:14:26 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int x = '\n';
// 	int y = 'o';
// 	int z = 128;
// 	printf("%d \n", ft_isascii(x));
// 	printf("%d \n", ft_isascii(y));
// 	printf("%d \n", ft_isascii(z));
// }