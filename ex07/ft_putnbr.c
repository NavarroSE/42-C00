/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:41:43 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/24 23:19:16 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 && nb < 0)
	{
		ft_write('-');
		ft_write('2');
		write(1, "147483648", 9);
	}
	else
	{
		if (nb < 0)
		{
			ft_write('-');
			nb *= -1;
		}
		if (nb > 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_write((nb % 10) + '0');
	}
}
