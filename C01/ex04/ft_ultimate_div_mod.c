/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roolivei <roolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:03:05 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 18:21:37 by roolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a; // Cria 'a' que vai começar com o dividendo
// 	int	b; // Cria 'b' que vai começar com o divisor

// 	a = 42; // Dá valor inicial 42 à a
// 	b = 5;  // Dá valor inicial 5 a b

// 	ft_ultimate_div_mod(&a, &b);

// 	if (a == 8 && b == 2)
// 		write(1, "42\n", 3); // Se reciclagem memória funcionar, mostra "42"
// 	else
// 		write(1, "Erro\n", 5); // Caso valores antigos incorretos

// 		return (0); // programa com sucesso
// }
