/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:52:31 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/11 23:16:47 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	swap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 16) % 26 + 'A';
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 16) % 26 + 'a';
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = swap(str[i]);
		i++;
	}
	return (str);
}
