/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:41:43 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/21 21:10:07 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	none;
	int	count;

	if (nb < 0)
	{
		ft_write('-');
		nb *= -1;
	}
	none = nb;
	count = 1;
	while (none > 10)
	{
		none /= 10;
		count *= 10;
	}
	while (nb > 10)
	{
		ft_write((nb / count) + '0');
		nb %= count;
		count /= 10;
	}
	ft_write((nb % 10) + '0');
}
