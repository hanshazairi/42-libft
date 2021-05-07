/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:02:38 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/07 18:07:28 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getwordcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	*start;
	char	**ret;
	size_t	i;

	ret = malloc(sizeof(char *) * getwordcount(s, c) + 1);
	if (!ret)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				++s;
			ret[i] = malloc(s - start + 1);
			if (!ret[i])
				return (0);
			ft_strlcpy(ret[i++], start, s - start + 1);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
