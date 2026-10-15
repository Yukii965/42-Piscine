/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:48:44 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/15 09:48:44 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/* #include <stdio.h>

 int main(void)
{
	char dest[20];
	unsigned int len;
	len = ft_strlcpy(dest, "Bonjour 42", 4);
	printf("destionqtion : %s\n", dest);
	printf("Longueur sources : %u\n", len);
} */