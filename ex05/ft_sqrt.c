/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:27:09 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/17 16:27:34 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_sqrt(int nb);
{
	int sqrt;
	{
	if(nb == 4)
		return(2);
	}
	sqrt=1;
		while(sqrt*sqrt<=nb)
			--sqrt;
	{
		if(sqrt*sqrt == nb)
			return(sqrt);
	}
	return (0);
}
