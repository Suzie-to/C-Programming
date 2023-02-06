/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahiya <zyahiya@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:58 by coder             #+#    #+#             */
/*   Updated: 2023/02/04 12:51:32 by zyahiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void	ft_print_comb(void);

char	ft_closing_sign(char s[]);
char    ft1(char s[]);

int	main(void)
{

	ft_print_comb();
	return (0);
}

/* using a string to save the current combination and pass it to the write()
    each digit starting form the lowest unique combination*/
/*789 is the highest unique combination, loop through the digits and print 
the unique combinations until we reach it */
void	ft_print_comb(void)
{
    char	str[4];

    str[0] = '0';
    str[1] = '1';
    str[2] = '2';
    str[3] = ',';

	while ((str[0] <= '7') || (str[1] <= '8') || (str[2] <= '9'))
	{
		str[3] = ft_closing_sign(str);
		write(1, &str, sizeof(str));
        ft1(str);
		
	}
}

char	ft_closing_sign(char str[])
{
	if (str[0]=='7' && str[1] == '8' && str[2] == '9')
	{
		str[3] = '\0';
	}
	else
	{
		str[3] = ',';
	}
	return (str[3]);
}

char ft1(char str[])
{
    if (str[2] != '9')
		{
			++str[2];
		}
		else
		{
			if (str[1] != '8')
			{
				++str[1];
				str[2] = str[1] + 1;
			}
			else
			{
				++str[0];
				str[1] = str[0] + 1;
				str[2] = str[1] + 1;
			}
		}
    return str;
}