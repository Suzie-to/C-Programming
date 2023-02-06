/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aaaaaaaa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:40:14 by zyahiya           #+#    #+#             */
/*   Updated: 2023/01/31 15:40:14 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_print_int(int num)
{
    int divisor = 10; 
    ft_putchar((char)(num/divisor) + '0'); // 5
    ft_putchar((char)(num%10) + '0');// 4
}

int main()
{
    // int length  = 3;
    // char nums[length];
    

    // int i = 0;
    // while(i<length){
    //     nums[i] += '0';
    //     i++;
    // }
    // printf("%s", nums);
     

    return 0;
}