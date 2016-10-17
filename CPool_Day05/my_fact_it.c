/*
** my_fact_it.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct  7 18:53:17 2016 Tamsi Besson
** Last update Mon Oct 10 21:28:06 2016 Tamsi Besson
*/

int	my_fact_it(int nb)
{
  int	i;
  
  i = nb - 1;
  if (nb > 0 && nb < 13)
    {
      while (i != 0)
	{
	  nb = nb * i;
	  i = i - 1;
	}
    }
  else if (nb == 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
  return (nb);
}
