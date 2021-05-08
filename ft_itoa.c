/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 20:03:01 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/09 01:17:26 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	if (n == 0)
		return (0);
	else
		return (1 + nlen(n / 10));
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;

	len = 1 + nlen(n / 10);
	if (n < 0)
		++len;
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = '0' + n % 10;
		else
			ret[--len] = '0' - n % 10;
		n /= 10;
	}
	return (ret);
}
