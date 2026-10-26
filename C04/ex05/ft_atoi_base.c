/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrakoto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:09:34 by nrakoto           #+#    #+#             */
/*   Updated: 2026/10/21 20:09:36 by nrakoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_pre_digit(char *str, int *sign)
{
	int	s;
	int	i;

	s = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	*sign = s;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	sum;
	int	current;
	int	base_size;

	sum = 0;
	sign = 1;
	base_size = ft_check_base(base);
	if (base_size >= 2)
	{
		i = ft_pre_digit(str, &sign);
		current = ft_atoi_match(str[i], base);
		while (current != -1)
		{
			sum = (sum * base_size) + current;
			i++;
			current = ft_atoi_match(str[i], base);
		}
		return (sign * sum);
	}
	return (0);
}
// #include <stdio.h>
// int main(void){
// 	printf("%d\n", ft_atoi_base("   ++++++--10", "0123456789"));
// }