/*
** my_strupcase.c for  in /home/Tamsi/CPool_Day06
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Mon Oct 10 19:33:55 2016 Tamsi Besson
** Last update Tue Oct 11 21:45:02 2016 Tamsi Besson
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32 ;
	}
      i = i + 1;
    }
  return (str);
}
