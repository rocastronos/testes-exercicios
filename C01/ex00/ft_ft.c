/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roolivei <roolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:53:33 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 17:13:59 by roolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int	numero;

// 	numero = 0;
// 	ft_ft(&numero); // A função muda o valor de 'numero' para 42

// 	// Se correu bem, o 'numero' agora é 42.
// 	// Vamos usar o write para mostrar o '4' e o '2' diretamente:
// 	if (numero == 42)
// 	{
// 		write(1, "42\n", 3); // Escreve o texto "42" e pula uma linha (\n)
// 	}
// 	else
// 	{
// 		write(1, "Erro\n", 5); // Caso a função não tenha funcionado
// 	}

// 	return (0);
// }
