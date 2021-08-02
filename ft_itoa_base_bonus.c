/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 00:55:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/08/03 02:20:18 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789abcdef";

	len = ft_numlen(n, base);
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
			ret[--len] = digits[n % base];
		else
			ret[--len] = digits[-n % base];
		n /= base;
	}
	return (ret);
}
