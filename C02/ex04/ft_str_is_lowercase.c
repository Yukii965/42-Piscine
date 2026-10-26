/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 06:44:08 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/19 10:47:19 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
