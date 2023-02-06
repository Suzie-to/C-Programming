/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04ft_ultimate_div_mod.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:00:26 by zyahiya           #+#    #+#             */
/*   Updated: 2023/02/06 10:00:26 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*divides a by b. The result of this division is stored in the int pointed by a.
The remainder of the division is stored in the int pointed by b.*/
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 20;

    b = 0;

    // printf("%d / %d\t", a, b);
    // printf("%d %% %d\t\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    // printf("%d\t", a);
    // printf("%d\n", b);
    return  (0);
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int err;

    err = 0;

    if (b != 0)
    {
        int div;
        int mod;

        div = *a / *b;
        mod = *a % *b;

        *a = div;
        *b = mod;

    }
    else
    {
        err;
    }
}