/*
** my_str_to_wordtab.c for  in /home/Tamsi/CPool_Day08/task04
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Thu Oct 13 15:02:46 2016 Tamsi Besson
** Last update Thu Oct 13 22:00:29 2016 Tamsi Besson
*/

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	k;
  int	length;
  char	*word;
  char	**str_words;

  i = 0;
  j = 0;
  k = 0;
  length = my_strlen(str);
  str_words = malloc(length + 1);
  word = malloc(length + 1);
  if (length == 0)
    return (str_words);
  while (i < length + 1)
    {
      if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
	{
	  word[k] = str[i];
	  k = k + 1;
	}
      else
	{
	  word[k] = '\0';
	  k = 0;
	  str_words[j] = my_strdup(word);
	  j = j + 1;
	}
      i = i + 1;
    }
  str_words[j] = '\0';
  return (str_words);
}
