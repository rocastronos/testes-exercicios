/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roolivei <roolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:29:06 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 18:01:57 by roolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div; // Cria gaveta guardar resultado divisão
// 	int	mod; // Cria gaveta guardar resto divisão

// 	// Envia os números 42 e 5, e as moradas gavetas para a função vai escrever
// 	ft_div_mod(42, 5, &div, &mod); 

// 	if (div == 8 && mod == 2)
// 		write (1, "42\n", 3); // dois ponteiros valores certos, mostra "42"
// 	else
// 		write (1, "Erro\n", 5); // Caso contas tenha falhado

// 	return (0); // programa com sucesso
// }
