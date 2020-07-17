/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:23:30 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/16 13:34:46 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_iterative_factorial(int nb)
{
	int
		unsigned int res;

	if(nb < 0 || nb 12)
		return (0);
	i = 2;
	res = 1;
	while( i  <= nb)
	{
		res = res *nb;
		--i;
	}
	return (res);
