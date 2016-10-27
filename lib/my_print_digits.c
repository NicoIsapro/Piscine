/*
** task3.c for  in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct  5 14:41:01 2016 Tamsi Besson
** Last update Thu Oct  6 09:45:28 2016 Tamsi Besson
*/

int     my_print_digits()
{
  char  digit;

  digit = 48;
  while (digit < 58)
    {
      my_putchar(digit);
      digit = digit + 1;
    }
}
