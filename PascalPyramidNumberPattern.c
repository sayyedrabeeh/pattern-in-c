/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n, i, j, c, s;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
	{
	  for (s = 0; s < n - i - 1; s++)
		{
		  printf ("   ");
		}
	  for (j = 0; j < i + 1; j++)
		{
		  if (j == 0)
			{
			  c = 1;
			}
		  else
			{
			  c = c * (i - j + 1) / j;
			}
		  printf ("  %d   ", c);
		}
	  printf ("\n");
	}

  return 0;
}
              1   
           1     1   
        1     2     1   
     1     3     3     1   
  1     4     6     4     1   
