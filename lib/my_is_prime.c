/*
** my_is_prime.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct  8 23:32:26 2016 Tamsi Besson
** Last update Mon Oct 17 23:32:40 2016 Tamsi Besson
*/

int     my_is_prime(int nb)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  if (nb < 1)
    {
      return (0);
    }
  while (i != nb)
    {
      if (nb / 1)
        {
          j = j + 1;
        }
    }
  if (j == 2)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
