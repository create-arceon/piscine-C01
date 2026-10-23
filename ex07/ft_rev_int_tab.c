/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:23:11 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 13:30:32 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[5];
// 	int	size;

// 	tab[0] = 1;
// 	tab[1] = 2;
// 	tab[2] = 3;
// 	tab[3] = 4;
// 	tab[4] = 5;
// 	size = 5;
// 	ft_rev_int_tab(tab, size);
// 	return (0);
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
