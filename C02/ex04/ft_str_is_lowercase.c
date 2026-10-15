/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:33:30 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 07:33:31 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 'a' || str[i] > 'z'))
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
	printf("Resultat min: %d\n", ft_str_is_lowercase(min));
	char maj[] = "BONJOUR";
	printf("Resultat maj: %d\n", ft_str_is_lowercase(maj));
} */