/*
** my_sort_int_tab.c for  in /home/Tamsi/mylib/lib/my
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sun Oct 16 18:58:23 2016 Tamsi Besson
** Last update Mon Oct 17 23:10:44 2016 Tamsi Besson
*/

void    my_sort_int_tab(int* tab, int size)
{
  int   i;
  int   j;
  int   min;
  int   temp;

  i = 0;
  j = 0;
  min = 0;
  while (i < size)
    {
      while (j < size)
        {
          if (tab[j] < tab[min])
            {
              min = j;
            }
          j = j + 1;
        }
      temp = tab[i];
      tab[i] = tab[min];
      tab[min] = temp;
      i = i + 1;
      j = i;
      min = i;
    }
}
