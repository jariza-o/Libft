/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:40:35 by jariza-o          #+#    #+#             */
/*   Updated: 2022/10/03 19:37:31 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	signo;
	int	buffer;

	count = 0;
	signo = 1;
	buffer = 0;
	while ((str[count] >= '\t' && str[count] <= '\r')
		|| str[count] == 32)
		count++;
	if (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			signo *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		buffer = (str[count] - '0') + (buffer * 10);
		count++;
	}
	return (signo * buffer);
}
