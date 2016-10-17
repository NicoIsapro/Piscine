/*
** my_show_tab.c for  in /home/Tamsi/CPool_Day09
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct 14 23:20:00 2016 Tamsi Besson
** Last update Fri Oct 14 23:41:01 2016 Tamsi Besson
*/

#include "my.h"
#include "struct.h"

int	my_show_tab(struct s_stock_par *par)
{
  int	i;

  i = 0;
  while (par->size_param != 0)
    {
      my_putstr(par->copy);
      my_putchar('\n');
      my_put_nbr(par->size_param);
      my_putchar('\n');
      my_show_to_wordtab(par->tab);
      i++;
    }
}
