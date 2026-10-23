/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:29:55 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 13:30:27 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

// int main(void)
// {
// 	int	tab[5];
// 	int	size;

// 	tab[0] = 5;
// 	tab[1] = 2;
// 	tab[2] = 4;
// 	tab[3] = 1;
// 	tab[4] = 3;
// 	size = 5;
// 	ft_sort_int_tab(tab, size);
// 	return (0);
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
