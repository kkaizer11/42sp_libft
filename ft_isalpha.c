/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:20:45 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 17:03:50 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include  <stdio.h>
// int main()
// {
// 	int x = 'J';
// 	int y = 'p';
// 	int z = '3';

// 	printf("%d \n", ft_isalpha(x));
// 	printf("%d \n", ft_isalpha(y));
// 	printf("%d \n", ft_isalpha(z));
// }
