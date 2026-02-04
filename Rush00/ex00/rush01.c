/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dammenez <dammenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:03:55 by dda-cruz          #+#    #+#             */
/*   Updated: 2026/01/31 18:40:13 by dammenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_end(int x)
{
	int	current_b;
	int	b_to_write;

	b_to_write = x - 2;
	current_b = 0;
	ft_putchar('\\');
	if (x == 1)
		ft_putchar('\n');
	while (current_b < b_to_write)
	{
		ft_putchar('*');
		current_b++;
	}
	if (x > 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush_middle(int x, int y, int characters_to_write)
{
	int	current_line;
	int	current_character;
	int	lines_to_write;

	lines_to_write = y - 2;
	current_line = 0;
	while (current_line < lines_to_write)
	{
		current_character = 0;
		ft_putchar('*');
		while (current_character < characters_to_write)
		{
			ft_putchar(' ');
			current_character++;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		current_line++;
	}
}

void	rush(int x, int y)
{
	int	current_b;
	int	characters_to_write;

	current_b = 0;
	characters_to_write = x - 2;
	if (x <= 0 || y <= 0)
		return ;
	ft_putchar('/');
	while (current_b < characters_to_write)
	{
		ft_putchar('*');
		current_b++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	if (y > 2)
		rush_middle(x, y, characters_to_write);
	if (y > 1)
		rush_end(x);
}
