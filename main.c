/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:20:57 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/02 23:19:15 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//ft_memset
// int	main(void)
// {
// 	char x[10];
// 	char y[10];
// 	memset(x, 'm', sizeof(char) * 10);
// 	ft_memset(y, 'm', sizeof(char) * 10);
// 	printf("1: %s\n", x);
// 	printf("2: %s\n", y);
// }

//ft_memcmp
int main()
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	//char sCpy[] = {-128, 0, 127, 0};
	printf("Valor: %d\n", ft_memcmp(s, s2, 4));
}