/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigelrobinson <Nige@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:56:27 by nigelrobinson     #+#    #+#             */
/*   Updated: 2023/05/30 14:30:50 by nigelrobinson    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIZZ_BUZZ_H
# define FT_FIZZ_BUZZ_H

# include <unistd.h>
# include <stdbool.h>
# define MAX 106
# define DIVISION_NBR_1 3
# define DIVISION_NBR_2 5
# define DIVISION_NBR_3 7

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
bool	ft_division(int number, int division_nbr);
void	ft_print_to_screen_result(bool flag_fizz, bool flag_buzz, \
bool flag_bazz, int counter);
void	ft_fizz_buzz(void);
#endif
