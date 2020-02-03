/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void    ft_putchar (char c)
{
  write (1, &c, 1);
}

void    ft_putstr (char *str)
{
  int n;
  n = 0;
  while (str[n] != '\0')
    {
      ft_putchar (str[n]);
      n++;
    }
}

int     main ()
    char str1[] = "Any Phrase"
    ft_putstr (str1);
    ft_putchar ('\n');
  return 0;
}
