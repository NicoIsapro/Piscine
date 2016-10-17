/*
** my_power_rec.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Fri Oct  7 21:12:33 2016 Tamsi Besson
** Last update Mon Oct 10 23:34:06 2016 Tamsi Besson
*/

int	my_power_rec(int nb, int p)
{
  int	result;
  
  if (p >= 1)
    {
      result = nb * my_power_rec(nb, p - 1);
      if (result < 0)
	{
	  return (0);
	}
      else
	{
	  return (result);
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
}
