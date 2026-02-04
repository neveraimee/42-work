/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:50:01 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/01/29 17:51:24 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
    int t = 10;
    int i = 11;
    

    printf(" before :%d, %d\n", t ,i);
    ft_swap(&t, &i);
    printf(" after :%d, %d\n", t ,i);

    return 0;
}
