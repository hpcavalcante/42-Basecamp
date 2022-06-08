/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:29:29 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/19 02:45:22 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int rest;
	a = 2500;
	b = 8;
	div = 0;
	rest = 0;
	ft_div_mod(a,b,&div,&rest);
	printf("div: %d / %d = %d\n",a,b,div);
	printf("rest: %d\n",rest);
}