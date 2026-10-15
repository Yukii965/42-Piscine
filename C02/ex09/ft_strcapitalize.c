/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:34:11 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 07:34:13 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	mots;

	i = 0;
	mots = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (mots && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!mots && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			mots = 0;
		}
		else
			mots = 1;
		i++;
	}
	return (str);
}

/* #include <stdio.h>

int main(void){
	char str[] = " him how are you...";
	printf("%s\n", ft_strcapitalize(str));
} */