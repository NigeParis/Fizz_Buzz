/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigelrobinson <Nige@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:53:44 by nigelrobinson     #+#    #+#             */
/*   Updated: 2023/05/28 15:46:24 by nigelrobinson    ###   ########.fr       */
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

/**
*	DESCRIPTION : Displays one caracter on the screen stdout
*	ARG : one char c, the caracter to be printed.
*	RETURNS : nothing
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
*	DESCRIPTION : Displays on the screen a number both negative and
*	positive.
*	ARGS : integer number to be displayed
*	RETURNS : nothing
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
*	the remainder. ( using the modulus operater % )
*	ARGS : the number to be divided , the number by which to divde by.
*	RETURN : true if divided equally and false if not.
*/

bool	ft_division(int counter, int division_nbr)
{
	if (counter % division_nbr == 0)
		return (true);
	return (false);
}

/**
*	DESCRIPTION : displays on the screen the number or Fizz or Buzz or both.
*	ARGS : flags Fizz and Buzz and the number (in this case counter)
*/

void	ft_print_to_screen_result(bool flag_fizz, bool flag_buzz, int counter)
{
	if ((flag_fizz) && (flag_buzz))
	{
		write(1, "FizzBuzz", 8);
		return ;
	}
	if ((flag_fizz) && (!flag_buzz))
	{
		write(1, "Fizz", 4);
		return ;
	}
	if ((!flag_fizz) && (flag_buzz))
	{
		write(1, "Buzz", 4);
		return ;
	}
	ft_putnbr(counter);
}
