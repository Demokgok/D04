/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demokgok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:00:37 by demokgok          #+#    #+#             */
/*   Updated: 2020/07/17 13:47:40 by demokgok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int ft_fibonacci(int index);
{
	if (index <= 1)
	{
		return (1);
	}
	if (index == 1)
	{
		return (2);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

