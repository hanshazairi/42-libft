/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:29:09 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/09 05:38:39 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	size_t	len;

	if (n < ft_strlen(s1))
		len = n;
	else
		len = ft_strlen(s1);
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s || ft_strlen(s) < start || !len)
		return (ft_strdup(""));
	ret = ft_strndup(s + start, len);
	return (ret);
}
