/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 15:38:52 by panibal           #+#    #+#             */
/*   Updated: 2026/09/03 11:10:25 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char frst, char snd, char trd)
{
	write(1, &frst, 1);
	write(1, &snd, 1);
	write(1, &trd, 1);
	if (!(frst == '7' && snd == '8' && trd == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	frst;
	char	snd;
	char	trd;

	frst = '0';
	while (frst <= '7')
	{
		snd = frst + 1;
		while (snd <= '8')
		{
			trd = snd + 1;
			while (trd <= '9')
			{
				print(frst, snd, trd);
				trd++;
			}
			snd++;
		}
		frst++;
	}
}
int	main()
{
	ft_print_comb();
} 