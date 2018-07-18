/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnicolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 04:26:24 by rnicolle          #+#    #+#             */
/*   Updated: 2018/07/08 04:27:02 by rnicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_draw(int colonne, int ligne, int col_m, int ligne_m)
{
	if (((col_m != 1) && (ligne == 0) && (colonne == col_m - 1)) ||
			((ligne == ligne_m - 1) && (colonne == 0) && (ligne_m != 1)))
		ft_putchar('\\');
	else if (((ligne == 0) && (colonne == 0)) ||
			((ligne == ligne_m - 1) && (colonne == col_m - 1)))
		ft_putchar('/');
	else if (((0 < ligne < ligne_m - 1) && ((colonne == 0) ||
					(colonne == col_m - 1))) ||
			((0 < colonne < col_m - 1) && ((ligne == 0) ||
				(ligne == ligne_m - 1))))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		ligne;
	int		colonne;

	colonne = 0;
	ligne = 0;
	if ((x > 0) && (y > 0))
		while (ligne < y)
		{
			while (colonne < x)
			{
				ft_draw(colonne, ligne, x, y);
				colonne++;
			}
			colonne = 0;
			ft_putchar('\n');
			ligne++;
		}
}
