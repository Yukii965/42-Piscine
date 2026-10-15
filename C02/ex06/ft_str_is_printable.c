/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:33:42 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 07:33:43 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 || str[i] <= 126)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void){
	char text[] = "Bonjour 42";
	printf("text normal = %d\n", ft_str_is_printable(text));
} */