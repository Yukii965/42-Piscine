/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:33:49 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 07:33:52 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char str[] = "Bonjour 42";
	printf("%s\n", ft_strupcase(str));
} */