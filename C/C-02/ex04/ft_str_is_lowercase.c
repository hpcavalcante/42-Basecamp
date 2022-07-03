/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:50:18 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/20 16:03:29 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] > 0)
	{
		if (!(str[i] > 96 && str[i] < 123))
		{
			
			printf("0");
			return (0);
		}
		i++;
	}
	printf("1");
	return (1);
}


int	main(void)
{
	char	str[] = "aaaaaaaaa";
	char	str2[] = "rjelkwrjwelkrjewlk054654jKKJJWJEIOOQ";
	
	ft_str_is_lowercase(str);
	ft_str_is_lowercase(str2);
}