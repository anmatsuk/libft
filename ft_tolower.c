/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatsuk <matsuknastya@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 17:04:42 by amatsuk           #+#    #+#             */
/*   Updated: 2017/06/14 17:04:43 by amatsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	int	f;

	f = c;
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
