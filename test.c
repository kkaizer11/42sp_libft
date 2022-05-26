/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:20:57 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/26 19:01:33 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int test(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

#include  <stdio.h>
int main()
{
	int x = '9';
	int y = '3';
	int z = '\n';

	printf("%d \n", test(x));
	printf("%d \n", test(y));
	printf("%d \n", test(z));
}
