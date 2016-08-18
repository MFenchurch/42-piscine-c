/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:19:35 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/11 16:43:13 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int c;

	if (nb <= 1)
		return (2);
	while (1)
	{
		c = 2;
		while (nb % c != 0)
		{
			c++;
		}
		if (c == nb)
			return (nb);
		else
			nb++;
	}
	return (0);
}
