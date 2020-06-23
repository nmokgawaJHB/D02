<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokgawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:40:30 by nmokgawa          #+#    #+#             */
/*   Updated: 2020/06/23 11:41:44 by nmokgawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
#include <unistd.h>
int ft_putchar(char c)
>>>>>>> 9a34bb936d395081f136b420cc54a9b8b6cc779c

#include <unistd.h>

int ft_putchar(char c)
{ 	write(1,&c,1);
	return 0;

}
	void ft_is_negative(int n);

{
<<<<<<< HEAD
	if (n > '0'); 
=======
	if (n > '0') 
>>>>>>> 9a34bb936d395081f136b420cc54a9b8b6cc779c
	ft_putchar('N');
	else 
		ft_putchar('P');

}
