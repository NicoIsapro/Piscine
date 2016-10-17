/*
** my_power_it.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct  7 18:53:17 2016 Tamsi Besson
** Last update Mon Oct 17 23:17:26 2016 Tamsi Besson
*/

int     my_power_it(int nb, int p)
{
  if (p > 0)
    {
      while (p > 1)
        {
          nb = nb * nb;
          if (nb < 0)
            {
              return (0);
            }
          p = p - 1;
        }
    }
  else if (p == 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
  return (nb);
}
