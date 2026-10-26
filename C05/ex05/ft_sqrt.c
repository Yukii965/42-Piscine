/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 00:43:31 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/24 09:31:55 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= (long)nb)
	{
		if (i * i == (long)nb)
			return ((int)i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void){
// 	printf ("sqrt(-4) = %d\n", ft_sqrt(-4));
// 	printf ("sqrt(25) = %d\n", ft_sqrt(25));
// }
