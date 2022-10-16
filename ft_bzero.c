/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:37:48 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/04 19:37:08 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
	return (s);
}