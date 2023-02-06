/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03ft_div_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:44:18 by zyahiya           #+#    #+#             */
/*   Updated: 2023/02/06 09:44:18 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function divides parameters a by b and stores the result in the int pointed by
div. It also stores the remainder of the division of a by b in the int pointed by mod.*/
void ft_div_mod(int a, int b, int *div, int *mod);

/*int main(void)
{
    int x = 20;
    int y = 6;
    int div;
    int mod;
    ft_div_mod(x, y, &div, &mod);
    // printf("%d = %d / %d\n", div, x, y);
    // printf("%d = %d %% %d\n", mod, x, y);
    return (0);
}*/
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}