/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:36:34 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/04/29 13:01:38 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize != 0)
		dst[i] = 0;
	while (src[i])
		++i;
	return (i);
}
