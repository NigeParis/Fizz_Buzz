vaiables and flags to be used :
int counter
int result
bool flag_Fizz
bool flag_Buzz
string "FIZZ"
string "BUZZ"

Defines :
define MAX the limit of counter 100 for example
define Divders     
            Division_nbr_1 = 3
            Division_nbr_2 = 5


Functions :
void	ft_game_fizz_Buzz (void);
bool	ft_Division(counter, Division_number);
void	ft_print_to_screen_result(flag_Fizz, flag_Buzz, counter);


void ft_game_fizz_Buzz(void)
{
  while (counter is under counter_limit(MAX))
  {
    flag_Fizz = ft_Division (counter, Division_nbr_1);

    flag_Buzz = ft_Division (counter, Division_nbr_2);
    
    ft_print_to_screen_result(flag_Fizz, flag_Buzz, counter)

    print(new line);
  
    counter = counter + 1;
  }
  
}

    
bool ft_Division(counter, Division_nbr)
{
	result = Divide counter by division_nbr;
	Check if (result is greater than 1)
		call function again ft_Division(send result, Division_nbr); - recursive ft
	Check if (the result is 1 or 0)
		if 1 return true
		if 0 return false
    
}


void ft_print_to_screen_result(flag_Fizz, Flag_Buzz, counter)
{
    if (Flag_Fizz and Flag_Buzz == true)
            then print "FIZZBUZZ" to screen and return
    if (Flag_Fizz and not Flag_Buzz == true)
            then print "FIZZ" to screen and return
    if (Flag_Buzz and not Flag_Fizz == true)
            then print "BUZZ" to screen and return
    else
        print counter and return
}
