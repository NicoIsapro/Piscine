/*
** my_show_wordtab.c for  in /home/Tamsi/CPool_Day08/task03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 14:04:08 2016 Tamsi Besson
** Last update Fri Oct 14 14:01:58 2016 Tamsi Besson
*/

int	my_show_wordtab(char **tab)
{
  int	i;
  int	length;

  i = 0;
  length = 0;
  while (tab[length] != 0)
    length = length + 1;
  while(i < length)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
