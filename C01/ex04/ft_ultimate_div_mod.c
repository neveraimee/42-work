/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:59:55 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/01/29 17:54:02 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*int main()
{
	int a = 13, b = 3;

	printf("Before: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("After: a = %d, b = %d\n", a, b);

	return 0;
}*/
