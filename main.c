/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:20:57 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/28 00:11:32 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <stdio.h>
#include <string.h>


int	main(void)
{	
	int x = 'a';
	char *z = "abcdeab" ;
	printf("%s\n",ft_strchr(z, x));
}
