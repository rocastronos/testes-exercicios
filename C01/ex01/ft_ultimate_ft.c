/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roolivei <roolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 17:39:37 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 14:04:49 by roolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// 2. A main para criar a "escada" de endereços e validar
// int	main(void)
// {
// 	int	numero;

// 	// Criar a escada de ponteiros (do 1 ao 8)
// 	int	*ptr1;
// 	int	**ptr2;
// 	int	***ptr3;
// 	int	****ptr4;
// 	int	*****ptr5;
// 	int	******ptr6;
// 	int	*******ptr7;
// 	int	********ptr8;

// 	numero = 0;

// 	// Ligar todos os ponteiros em cadeia
// 	ptr1 = &numero; // ptr1 aponta para o número
// 	ptr2 = &ptr1;   // ptr2 aponta para o ptr1
// 	ptr3 = &ptr2;   // ... e assim por diante
// 	ptr4 = &ptr3;
// 	ptr5 = &ptr4;
// 	ptr6 = &ptr5;
// 	ptr7 = &ptr6;
// 	ptr8 = &ptr7;

// 	// Chamamos a função passando o endereço do último ponteiro (&ptr8)
// 	// Isso cria o 9º nível que a função espera!
// 	ft_ultimate_ft(&ptr8);

// 	// Validação direta com o write
// 	if (numero == 42)
// 	{
// 		write(1, "42\n", 3); // Se a cadeia funcionou, escreve 42
// 	}
// 	else
// 	{
// 		write(1, "Erro\n", 5);
// 	}

// 	return (0);
// }
