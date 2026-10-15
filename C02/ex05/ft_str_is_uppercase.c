/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:33:36 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 07:33:37 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void){
	char min[] = "bonjour";
	printf("Resultat min: %d\n", ft_str_is_uppercase(min));
	char maj[] = "BONJOUR";
	printf("Resultat maj: %d\n", ft_str_is_uppercase(maj));
} */