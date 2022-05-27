/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:20:45 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 19:29:19 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int x = 'J';
// 	int y = 'p';
// 	int z = '3';

// 	printf("A minha funcao retorna: %d \n", ft_isalpha(x));
// 	printf("Original: %d \n", isalpha(x));
// 	printf("A minha funcao retorna: %d \n", ft_isalpha(y));
// 	printf("Original: %d \n", isalpha(y));
// 	printf("A minha funcao retorna: %d \n", ft_isalpha(z));
// 	printf("Original: %d \n", isalpha(z));
// }
