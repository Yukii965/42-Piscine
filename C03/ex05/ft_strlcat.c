/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:20:43 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/22 01:57:53 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned	int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		sum = d + s;
	else
		sum = s + size;
	while (src[i] && size > d + 1)
	{
		dest[d] = src[i];
		i++;
	}
	dest[d] = '\0';
	return (sum);
}

#include<stdio.h>
int main(void){
	char dest[10] = "b";
	char src[10] = "ours";
	int size = 2;

	printf("dest before : %s\n", dest);
	ft_strlcat(dest, src, size);
	printf("dest after : %s\n", dest);
}
