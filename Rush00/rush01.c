/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 09:54:57 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/10 09:54:59 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	get_char(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
	{
		return ('/');
	}
	else if (i == 1 && j == x)
	{
		return ('\\');
	}
	else if (i == y && j == 1)
	{
		return ('\\');
	}
	else if (i == y && j == x)
	{
		return ('/');
	}
	else if (i == 1 || j == 1 || i == y || j == x)
	{
		return ('*');
	}
	else
		return (' ');
}

void	rush01(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	i = 1;
	while ((i <= y))
	{
		j = 1;
		while (j <= x)
		{
			ft_putchar(get_char(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
