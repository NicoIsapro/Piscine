/*
** my_find_prime_sup.c for  in /home/Tamsi/mylib/lib/my
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sun Oct 16 19:00:43 2016 Tamsi Besson
** Last update Mon Oct 17 23:10:15 2016 Tamsi Besson
*/

#include <my.h>

int     my_find_prime_sup(int nb)
{
  if (nb > 2 && nb % 2 == 0)
    {
      nb = nb + 1;
    }
  while (!my_is_prime(nb))
    {
      nb = nb + 2;
    }
  return (nb);
}
