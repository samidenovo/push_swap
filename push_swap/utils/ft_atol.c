/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:11:29 by samalves          #+#    #+#             */
/*   Updated: 2025/07/25 19:11:55 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *s)
{
	int		i;
	long	sign;
	long	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while (s[i] <= 32 && s[i] >= 7)
		i++;
	if (s[i] == 43 || s[i] == 45)
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		nbr *= 10;
		nbr += s[i] - 48;
		i++;
	}
	return (sign * nbr);
}
