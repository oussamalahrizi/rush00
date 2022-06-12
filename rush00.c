/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olahrizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:39:01 by olahrizi          #+#    #+#             */
/*   Updated: 2022/06/12 14:07:35 by olahrizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char c, char d, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(c);
		else
			ft_putchar(d);
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		if (j == 0 || j == y - 1)
		{
			ft_print('o', '-', x);
		}
		else
		{
			ft_print('|', ' ', x);
		}
		ft_putchar('\n');
		j++;
	}
}
