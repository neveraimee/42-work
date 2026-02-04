/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:58:56 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/01/28 21:57:39 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char x, char y, char z)
{
	char	c;

	c = x + '0';
	write(1, &c, 1);
	c = y + '0';
	write(1, &c, 1);
	c = z + '0';
	write(1, &c, 1);
	if (!(x == 7 && y == 8 && z == 9))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 0;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			third = second + 1;
			while (third <= 9)
			{
				ft_print_result(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
// int main(void)
// {
//     ft_print_comb();
// }