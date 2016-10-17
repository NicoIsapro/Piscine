/*
** my_fact_rec.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct  7 21:12:33 2016 Tamsi Besson
** Last update Mon Oct 10 21:29:13 2016 Tamsi Besson
*/

int my_fact_rec(int nb)
{
  if (nb > 0 && nb < 13)
    {
      return (nb * my_fact_rec(nb - 1));
    }
  else if (nb == 0 || nb == 1)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
