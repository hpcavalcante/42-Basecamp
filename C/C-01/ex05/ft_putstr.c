/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hepiment <hepiment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:43:16 by hepiment          #+#    #+#             */
/*   Updated: 2022/04/19 02:45:57 by hepiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int        main(void)
{
	char word[] = "subject";
	char *pont = &word[0];
	ft_putstr(pont);
}