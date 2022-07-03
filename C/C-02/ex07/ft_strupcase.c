/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:50:18 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/22 08:00:25 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{

	while(*str != '\0')
	{
		if (*str >= 97 && *str <=122)
		{
			*str = *str - 32;
		}
		*str++;
	}
	printf("%s", str);
	return (str);
}


int	main(void)
{

	char	str[] = "ASrjelkwrjwelkrjewlkjKKJJWJEIOOQ";
	
	ft_strupcase(str);

}