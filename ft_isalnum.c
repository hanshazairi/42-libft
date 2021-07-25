/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:47:05 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/26 00:58:40 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c);
int		ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
