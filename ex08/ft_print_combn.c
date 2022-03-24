/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:00:34 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/24 23:08:26 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int comb[], int n)
{
	int		x;
	char	y;

	x = 0;
	while (x < n)
	{
		y = comb[x] + '0';
		write(1, &y, 1);
		x++;
	}
}

int	ft_index(int comb[], int n)
{
	int	x;
	int	max;

	x = 0;
	max = 10 - n;
	while (x < n)
	{
		if (comb[x] == max)
			return (x - 1);
		if (x == (n - 1) && comb[x] < max)
			return (x);
		x++;
		max++;
	}
	return (-1);
}

void	ft_incremment(int comb[], int n, int index)
{
	int	x;

	x = index + 1;
	comb[index]++;
	while (x <= n)
	{
		comb[x] = comb[x - 1] + 1;
		x++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	x;
	int	index;

	if (!(n >= 10 || n <= 0))
	{
		x = 0;
		while (x < n)
		{
			comb[x] = x;
			x++;
		}
		while (ft_index(comb, n) != -1)
		{
			index = ft_index(comb, n);
			ft_print_comb(comb, n);
			ft_incremment(comb, n, index);
			write(1, ", ", 2);
		}
		ft_print_comb(comb, n);
	}
}
