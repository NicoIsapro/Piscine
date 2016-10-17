/*
** my_param_to_tab.c for  in /home/Tamsi/CPool_Day09/task03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct 14 10:48:31 2016 Tamsi Besson
** Last update Fri Oct 14 22:31:49 2016 Tamsi Besson
*/

#include "my.h"
#include "struct.h"

s_stock_par     createStruct(char *param)

{
  struct s_stock_par pstock;
  
  pstock.size_param = my_strlen(param);
  pstock.str = param;
  pstock.copy = my_strdup(param);
  pstock.tab = my_str_to_wordtab(param);
  return (pstock);
}

struct  s_stock_par *my_param_to_tab(int ac, char **av)
{
  char  *result;
  int	i;
  
  i = 0;
  result = malloc(ac * sizeof(t_stock_par));
  while (i < ac)
    {
      result[i] = createStruct(av[i]);
      i = i + 1;
    }
  result[i].str = 0;
  return (result);
}
