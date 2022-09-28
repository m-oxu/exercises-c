/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex001.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moxu <dairenkonmajime@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:34:48 by moxu              #+#    #+#             */
/*   Updated: 2022/09/27 21:50:09 by moxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Your program is to use the brute-force approach in order to find the Answer
to Life, the Universe, and Everything. More precisely... rewrite small numbers
from input to output. Stop processing input after reading in the number 42.
All numbers at input are integers of one or two digits.
*/

#include <stdio.h>

int	main(void)
{
	int	digits_input[5];
	int	i;

		i = 0;
	while (i < 5)
	{
		printf("Input the %dth number: ", i);
		scanf("%d", &digits_input[i]);
		i++;
	}
	i = 0;
	while (digits_input[i] != 42)
	{
		printf("%d\n", digits_input[i]);
		i++;
	}
	return (0);
}
