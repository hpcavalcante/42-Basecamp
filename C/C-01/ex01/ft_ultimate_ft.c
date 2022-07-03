/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:59:01 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/19 02:44:25 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int x;
	x = 10;
	int	*p0 = &x;
	int	**p1 = &p0;
	int	***p2 = &p1;
	int	****p3 = &p2;
	int	*****p4 = &p3;
	int	******p5 = &p4;
	int	*******p6 = &p5;
	int	********p7 = &p6;
	printf("%d", x);
	ft_ultimate_ft(&p7);
	printf("%d", x);
}