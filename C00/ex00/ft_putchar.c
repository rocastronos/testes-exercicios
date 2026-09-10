/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:32:37 by roolivei          #+#    #+#             */
/*   Updated: 2026/09/10 22:20:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main () // funcao devolver o numero inteiro 
{ 
	char c = 'R'; // cria a variavel com nome c onde recebe o valor 7 
	ft_puchar (c); // chama a funcao definida acima 
}
