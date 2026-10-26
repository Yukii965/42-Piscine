/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 00:43:13 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/24 09:31:36 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	results;

	if (power < 0)
		return (0);
	results = 1;
	while (power > 0)
	{
		results *= nb;
		power--;
	}
	return (results);
}

/*clear
#include <stdio.h>

int main(void){
	printf("2^3 = %d\n", ft_iterative_power(2, -3));
}*/
