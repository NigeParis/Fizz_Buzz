/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigelrobinson <Nige@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:53:44 by nigelrobinson     #+#    #+#             */
/*   Updated: 2023/05/28 14:54:31 by nigelrobinson    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fizz_buzz.h"




void	ft_fizz_buzz(void)
{
	int	counter;
	bool	flag_fizz;
	bool	flag_buzz;

	counter = 1;
	while (counter < (MAX + 1))
	{
		flag_fizz = ft_division(counter, DIVISION_NBR_1);
		flag_buzz = ft_division(counter, DIVISION_NBR_2);
		ft_print_to_screen_result(flag_fizz, flag_buzz, counter);
		ft_putchar('\n');
		counter++;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	char c;
	while(*str)
	{
		c = *str;
		ft_putchar(c);	
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}


bool	ft_division(int counter, int division_nbr)
{
	if (counter%division_nbr == 0)
		return (true);
	return (false);
}

void	ft_print_to_screen_result(bool flag_fizz, bool flag_buzz, int counter)
{
	if ((flag_fizz) && (flag_buzz))
	{
		ft_putstr("FizzBuzz");
		return;
	}
	if ((flag_fizz) && (!flag_buzz))
	{
		ft_putstr("Fizz");
		return;
	}
	if ((!flag_fizz) && (flag_buzz))
	{
		ft_putstr("Buzz");
		return;
	}
	ft_putnbr(counter);
}
