/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:41:59 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 17:03:44 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include  <stdio.h>
// int main()
// {
// 	int x = '9';
// 	int y = '3';
// 	int z = 'J';

// 	printf("%d \n", ft_isdigit(x));
// 	printf("%d \n", ft_isdigit(y));
// 	printf("%d \n", ft_isdigit(z));
// }
