/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnicolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 04:27:29 by rnicolle          #+#    #+#             */
/*   Updated: 2018/07/08 04:27:48 by rnicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

int		main(void)
{
	rush(12, 4);
	ft_putchar('\n');
	rush(21, 8);
	ft_putchar('\n');
	rush(4, 2);
	ft_putchar('\n');
	rush(1, 3);
	ft_putchar('\n');
	rush(28, 3);
	ft_putchar('\n');
}
