/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:53:38 by jpinyot           #+#    #+#             */
/*   Updated: 2018/01/28 18:49:47 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>
#include <locale.h>
int     main(void)
{
	setlocale(LC_ALL, "");	
//	intmax_t		res = 30000000345;
//	unsigned int	res2 = 320;
//	char			s[] = "Hola primoh como va todo";
//	int				a;
//	wchar_t			wc[50] = L"ឃ  a";
//	ft_putnbr(res);
//	ft_putchar('\n');
//	short w = 21458766755;
	int w = 1;
	void *c = &w;
//	int w =  4294967295;
	ft_printf("El character es: |%p| o puede ser %%100\n", w);
	printf("El character es: |%p| o puede ser %%100\n", w);
//	printf("|%S|", wc);
	return (0);
}