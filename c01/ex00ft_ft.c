/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00ft_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:46:52 by zyahiya           #+#    #+#             */
/*   Updated: 2023/02/06 08:46:52 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*sets the value "42" to an int.*/
void ft_ft(int *nbr);

/*int main(void)
{
    int *n;

    int x;

    x = 10;
    n = &x;
    ft_ft(n);

    return (0);
}*/

void ft_ft(int *nbr)
{
    int num;
    
    nbr = &num;

    num = 42;
}