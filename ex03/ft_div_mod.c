/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:27:11 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 13:14:38 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10;
// 	b = 3;
// 	ft_div_mod(a, b, &div, &mod);
// 	return (0);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
