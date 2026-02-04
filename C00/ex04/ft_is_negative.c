/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:58:50 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/01/28 21:45:49 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else if (n >= 0)
	{
		write (1, "P", 1);
	}
}

// int main(void)
// {
//     ft_is_negative(9);
//     ft_is_negative(0);
//     ft_is_negative(-4);
// }