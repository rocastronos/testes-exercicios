/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roolivei <roolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:08:03 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 17:27:56 by roolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	x; // Cria a variável x (nossa primeira gaveta)
// 	int	y; // Cria a variável y (nossa segunda gaveta)

// 	x = 2; // Coloca o número 2 dentro de x
// 	y = 4; // Coloca o número 4 dentro de y

// 	ft_swap(&x, &y); // Envia x e y para a função fazer a troca

// 	// Teste de validação: Se correu bem, o x passou a 4 E y passou a 2
// 	if (x == 4 && y == 2)
// 		write(1, "42\n", 3); // Se estiver correto, junta e mostra "42"
// 	else
// 		write(1, "Erro\n", 5); // Se tiverem trocado, mostra "Erro"

// 	return (0); // Avisa que terminou com sucesso
// }
