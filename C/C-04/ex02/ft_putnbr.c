/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 06:56:19 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/23 06:58:44 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_int(int i)
{
	char	c;

	c = '0';
	c = c + i;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	while (i <= nb / 10)
		i = i * 10;
	while (i >= 1)
	{
		ft_putchar_int(nb / i);
		nb = nb - (nb / i) * i;
		i = i / 10;
	}
}
