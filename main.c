/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:20:57 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/29 00:40:00 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include  <stdio.h>
#include <string.h>

int	main(void)
{
	char *x = "pedrinho vai ser papai";
	char *y = "vai";
	//ft_strlcpy(char *dst, const char *src, size_t size)
	printf("achou?: %s\n", ft_strnstr(x , y , 50));
	
}