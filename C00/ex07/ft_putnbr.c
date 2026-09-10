/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 09:53:51 by panibal           #+#    #+#             */
/*   Updated: 2026/09/03 12:28:34 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
int	main()
	{
		char c = '\n';
		ft_putnbr(2147483649);
		ft_putchar(c);
		ft_putnbr(-2147483648);
		ft_putchar(c);
		ft_putnbr(2);
		ft_putchar(c);
		ft_putnbr(-2);
	} 