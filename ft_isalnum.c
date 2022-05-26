/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:47:28 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 17:03:53 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int x = '3';
// 	int y = 'P';
// 	int z = '@';
// 	printf("%d\n", ft_isalnum(x));
// 	printf("%d\n", ft_isalnum(y));
// 	printf("%d\n", ft_isalnum(z));
// }