/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatsuk <matsuknastya@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 16:58:04 by amatsuk           #+#    #+#             */
/*   Updated: 2017/06/14 16:58:06 by amatsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	int	f;

	f = c;
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
