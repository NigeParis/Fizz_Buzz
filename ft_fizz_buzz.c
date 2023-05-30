/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigelrobinson <Nige@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:53:44 by nigelrobinson     #+#    #+#             */
/*   Updated: 2023/05/30 14:28:48 by nigelrobinson    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*	Header fizz Buzz Game
*/

#include "ft_fizz_buzz.h"

/**
*	DESCRITPION : Fizz Buzz main game function. Plays the game from 1 to 100
*	With the number 3 amd 5. All are defined int the header.
*  When divided equally by 3 prints Fizz and by 5 Buzz and both FizzBuzz
*
*	ARGS : nome
*	RETURNS nothing
*/

void	ft_fizz_buzz(void)
{
	int		counter;
	bool	flag_fizz;
	bool	flag_buzz;
	bool	flag_bazz;

	counter = 1;
	while (counter < (MAX + 1))
	{
		flag_fizz = ft_division(counter, DIVISION_NBR_1);
		flag_buzz = ft_division(counter, DIVISION_NBR_2);
		flag_bazz = ft_division(counter, DIVISION_NBR_3);
		ft_print_to_screen_result(flag_fizz, flag_buzz, flag_bazz, counter);
		ft_putchar('\n');
		counter++;
	}
}

/**
*	DESCRIPTION : Displays one caracter on the screen stdout
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
*	DESCRIPTION : Displays on the screen
*/

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

/**
*	DESCRIPTION : Divides a number (counter) by a division number to determine
*/

bool	ft_division(int number, int division_nbr)
{
	return (number % division_nbr == 0);
}

/**
*	DESCRIPTION : displays the number or Fizz, Buzz or Bazz or combination..
*/

void	ft_print_to_screen_result(bool flag_fizz, bool flag_buzz,
bool flag_bazz, int counter)
{
	if ((!flag_fizz) && (!flag_buzz) && (!flag_bazz))
		ft_putnbr(counter);
	if (flag_fizz)
		write(1, "Fizz", 4);
	if (flag_buzz)
		write(1, "Buzz", 4);
	if (flag_bazz)
		write(1, "Bazz", 4);
	return ;
}
