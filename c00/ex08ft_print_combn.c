/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08ft_print_combn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:58:30 by zyahiya           #+#    #+#             */
/*   Updated: 2023/01/31 09:58:30 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ZERO_CHAR       '0'
#define MAX_ARR_SIZE    10

/*displays all different combinations of n numbers by ascending order
receives int param that determines the length of the number*/
void ft_print_combn(int);

/*prints the character*/
void  ft_putchar(char c);

/*converts the integer into a char 
(using division & modular division to determine digits) and prints it*/
void ft_print_int(int);

int main()
{
    ft_print_combn(2);
    return 0;
}

void ft_print_int(int num)
{
    ft_putchar((char)(num/10) + ZERO_CHAR);
    ft_putchar((char)(num%10) + ZERO_CHAR);
}

int ft_count_nums(char c){
    int counter;
    counter = (int)(c);

}

void ft_print_combn(int length)
{
    char num_arr[length];

    int i;
    i = 0;
    num_arr[0] = '0';

    while(i<=length){
        num_arr[i] = (char)(i);
        i++;
    }
}