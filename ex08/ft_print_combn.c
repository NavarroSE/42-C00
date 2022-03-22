/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:00:34 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/22 11:59:07 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(5);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	edit;
	int	prev;
	int	count;
	int	bucle;

	bucle = 0;
	count = 0;
	prev = 0;
	edit = n;
	while (count <= n)
	{
		while (edit <= n)
		{
			while (bucle <= n)
			{
				if (edit == 1)
					ft_putchar(prev + 1 + '0');
				else
					ft_putchar('0');
				prev++;
				bucle++;
			}
			edit--;
		}
		edit = n;
		count++;
		ft_putchar('\n');
	}
	bucle = 0;
}
