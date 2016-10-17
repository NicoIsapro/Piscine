/*
** task5.c for  in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct  5 18:57:10 2016 Tamsi Besson
** Last update Thu Oct  6 09:46:24 2016 Tamsi Besson
*/

int	my_print_comb()
{
  char	a;
  char	b;
  char	c;
  
  a = 48;
  while (a <= 55)
    {
      b = a + 1;
      while (b <= 56)
	{
	  c = b + 1;
	  while (c <= 57)
	    {
	      my_comb_printer(a, b, c);
	      c = c + 1;
	    }
	  b = b + 1;
	}
      a = a + 1;
    }
  
}

void	my_comb_printer(int a, int b, int c)
{
  if (a == 55 && b == 56 && c == 57)
    {
      my_putchar(a);
      my_putchar(b);
      my_putchar(c);
    }
  else
    {
      my_putchar(a);
      my_putchar(b);
      my_putchar(c);
      my_putchar(',');
      my_putchar(' ');
    }
}
