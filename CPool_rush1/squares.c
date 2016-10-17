/*
** squares.c for  in /home/Tamsi/CPool_rush1
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sat Oct  8 14:51:24 2016 Tamsi Besson
** Last update Sun Oct  9 10:38:17 2016 Tamsi Besson
*/

void	rush(int column_size, int row_size)
{
  int i;
  int j;

  i = column_size;
  j = row_size;

  if (column_size == 1)
    {
      while (j > 0)
	{
	  my_putchar('*');
	  my_putchar('\n');
	  j--;
	}
    }
  else if (row_size == 1)
    {
      while (i > 0)
	{
	  my_putchar('*');
	  i--;
	}
      my_putchar('\n');
    }
  
  else {
    while (j > 0)
      {
	while (i > 0)
	  {
	    if (j == row_size)
	      {

		if (i == column_size)
		  {
		    my_putchar('/');
		  }
		if (i == 1)
		  {
		    my_putchar('\\');
		  }
		if (i > 1 && i < column_size)
		  {
		    my_putchar('*');
		  }
	      }
	    if (j == 1)
	      {
	      
		if (i == column_size)
		  {
		    my_putchar('\\');
		  }
		if (i == 1)
		  {
		    my_putchar('/');
		  }
		if (i > 1 && i < column_size)
		  {
		    my_putchar('*');
		  }
	      }

	    if (j != 1 && j != row_size)
	      {
		if (i == column_size)
		  {
		    my_putchar('*');
		  }
		if (i == 1)
		  {
		    my_putchar('*');
		  }
		if (i != 1 && i != column_size)
		  {
		    my_putchar(' ');
		  }
	      }
	    i--;
	  }
	my_putchar('\n');
	j--;
	i = column_size;
      }
  }
}
