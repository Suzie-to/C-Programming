/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01ft_ultimate_ft.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:48:25 by zyahiya           #+#    #+#             */
/*   Updated: 2023/02/06 08:48:25 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*assigns a value to a pointer to pointer to pointer to pointer to pointer to pointer 
to pointer to pointer to pointer to int*/
void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int val = 0;
    int *ptr1 = &val;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    ft_ultimate_ft(&ptr8);
    printf("%d\n", val);
    return (0);
}

void ft_ultimate_ft(int *********nbr)
{
    int val;

    val = 42;
    *********nbr = val;
}