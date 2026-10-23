/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:25:42 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 12:26:37 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

// int main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 10;
// 	ft_swap(&a, &b);
// 	return (0);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
