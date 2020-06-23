/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokgawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 07:55:32 by nmokgawa          #+#    #+#             */
/*   Updated: 2020/06/23 07:55:46 by nmokgawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putchar(char letter);
{
 write(1, &letter, 1);
}

void ft_print_alphabet(void)

{ char letter;
   	letter = 'a';
   	while (letter <= 'z') 
	ft_putchar(letter++); 
}

