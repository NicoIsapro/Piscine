/*
** my_square_root.c for  in /home/Tamsi/CPool_Day05
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct  8 23:14:46 2016 Tamsi Besson
** Last update Mon Oct 10 23:41:52 2016 Tamsi Besson
*/

int	my_square_root(int nb)
{
  int i;
  int square;
  
  i = 0;
  square = 0;
  while (square <= nb)
    {
      square = i * i;
      if (square == nb)
	{
	  return (i);
	}
      else if (square < 0)
	{
	  return (0);
	}
      i = i + 1;
    }
  
  return (0);
}
