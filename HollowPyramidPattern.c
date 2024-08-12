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
  int n, i, j, s;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
	{
	  for (s = 0; s < n - i - 1; s++)
		{
		  printf ("   ");
		}
	  for (j = 0; j < 2 * i + 1; j++)
		{
		  if ((j == 0) || (j == 2 * i) || (i == n - 1))
			{
			  printf ("*  ");
			}
		  else
			{
			  printf ("   ");
			}
		}
	  printf ("\n");
	}

  return 0;
}
            *  
         *     *  
      *           *  
   *                 *  
*  *  *  *  *  *  *  *  *  
