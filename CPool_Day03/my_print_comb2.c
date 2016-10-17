/*
** my_print_comb2.c for  in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct  6 17:54:14 2016 Tamsi Besson
** Last update Sat Oct  8 20:57:00 2016 Tamsi Besson
*/

int	display(int x)
{
  char letter1;
  char letter2;

  letter1 = (x / 10) + 48;
  letter2 = (x % 10) + 48;
  my_putchar(letter1);
  my_putchar(letter2);

  return (0);
}

int	my_print_comb2()
{
  int	a;
  int	b;

  a = 0;
  b = 1;
  while (a < 99)
    {
      b = a + 1;
      while (b < 100)
	{
	  display(a);
	  my_putchar(' ');
	  display(b);
	  if (a != 98 || b != 99)
	    {
	      my_putchar (',');
	      my_putchar (' ');
	    }
	  b = b + 1;
	}
      a = a + 1;
    }
}
