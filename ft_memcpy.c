/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:07:10 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/26 01:03:44 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (ret);
}
