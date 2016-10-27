/*
** my_showstr.c for  in /home/Tamsi/mylib/lib/my
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sun Oct 16 19:02:36 2016 Tamsi Besson
** Last update Mon Oct 17 23:09:58 2016 Tamsi Besson
*/

#include <my.h>

void    my_showstr(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (is_printable(str[i]))
        {
          my_putchar(str[i]);
        }
      else
        {
          my_putchar('\\');
          if (str[i] < 16)
            {
              my_putchar('0');
            }
          my_putnbr_base(str[i], "0123456789abcdef");
        }
      i = i + 1;
    }
}
