/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 06:15:36 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/12 06:15:38 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
		}
		j++;
	}
	i++;
}
