/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:59:56 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/21 21:12:51 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	out;
	int	nb;

	write(1, "Indica valor ", 13);
	scanf("%i", &nb);
	ft_putnbr(nb);
	scanf("%i", &out);
	return (0);
}
