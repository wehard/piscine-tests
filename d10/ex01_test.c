/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 11:59:12 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = long_nb * -1;
	}
	if (long_nb < 10)
	{
		ft_putchar('0' + long_nb);
	}
	else
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
}

int	main(void)
{
	int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	ft_foreach(tab, 9, &ft_putnbr);
}
