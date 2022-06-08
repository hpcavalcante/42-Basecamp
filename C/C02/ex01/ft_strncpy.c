/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:35:29 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/21 05:02:55 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;	
	while(i != n)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include<stdio.h>
int main(void)
{
	unsigned int n = 5;
	char dest[] = "cdeabaassd";
	char src[] = "bbdwadff";
	
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}

