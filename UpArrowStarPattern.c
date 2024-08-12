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
  int n, i, j;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = 0; i <= n; i++)
	{
	  for (j = -n; j <= n; j++)
		{
		  if ((-(i) < j) && (j < i))
			{
			  printf ("  ");
			}
		  else
			{
			  printf ("* ");
			}
		}
	  printf ("\n");
	}
  return 0;
}
* * * * * * * * * * * 
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * * 
* *               * * 
*                   * 
