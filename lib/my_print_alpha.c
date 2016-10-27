/*
** task1.c for task1.c in /home/Tamsi/CPool_Day03
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Wed Oct  5 10:11:42 2016 Tamsi Besson
** Last update Thu Oct  6 09:44:40 2016 Tamsi Besson
*/

int     my_print_alpha()
{
  char  alphabet;

  alphabet = 97;
  while (alphabet < 123)
    {
      my_putchar(alphabet);
      alphabet = alphabet + 1;
    }
}
