/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:39:00 by mdouzi            #+#    #+#             */
/*   Updated: 2022/10/01 22:36:50 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	while ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
