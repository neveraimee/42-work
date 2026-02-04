/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:54:57 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/01/29 17:52:12 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main()
// {
//     int a = 10, b = 3;
//     int div, mod;

//     ft_div_mod(a, b, &div, &mod);

//     printf("a = %d, b = %d\n", a, b);
//     printf("Division: %d, Modulus: %d\n", div, mod);

//     return 0;
// }