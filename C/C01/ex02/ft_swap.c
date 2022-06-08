/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:12:44 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/19 02:44:59 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
   int a = 18;
   int b = 1800;
   printf("before a: %d\n", a);
   printf("before b: %d\n", b);
   ft_swap(&a, &b);
   printf("after a: %d\n", a);
   printf("after b: %d\n", b);
}