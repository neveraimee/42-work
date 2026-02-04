/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-cruz <dda-cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:04:03 by dda-cruz          #+#    #+#             */
/*   Updated: 2026/01/31 18:37:00 by dda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_end(int x)/*writes last line*/
{
	int	curret_hyphen;
	int	hyphen_to_write;

	hyphen_to_write = x - 2;
	curret_hyphen = 0;
	ft_putchar('o');
	if (x == 1)
		ft_putchar('\n');
	while (curret_hyphen < hyphen_to_write)
	{
		ft_putchar('-');
		curret_hyphen++;
	}
	if (x > 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	rush_middle(int x, int y, int colums_to_write)
{
	int	current_line;
	int	current_colum;
	int	lines_to_write;

	lines_to_write = y - 2;
	current_line = 0;
	while (current_line < lines_to_write)
	{
		current_colum = 0;
		ft_putchar('|');
		while (current_colum < colums_to_write)
		{
			ft_putchar(' ');
			current_colum++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		current_line++;
	}
}

void	rush(int x, int y)
{
	int	curret_hyphen;
	int	colums_to_write;

	curret_hyphen = 0;
	colums_to_write = x - 2;
	if (x <= 0 || y <= 0)
		return ;
	ft_putchar('o');
	while (curret_hyphen < colums_to_write)
	{
		ft_putchar('-');
		curret_hyphen++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
	if (y > 2)
		rush_middle(x, y, colums_to_write);
	if (y > 1)
		rush_end(x);
}
