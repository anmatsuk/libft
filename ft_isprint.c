/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatsuk <matsuknastya@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 16:50:48 by amatsuk           #+#    #+#             */
/*   Updated: 2017/06/14 16:50:50 by amatsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	int	f;

	f = c;
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
