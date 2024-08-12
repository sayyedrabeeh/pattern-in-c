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
  int i, j, s, n, l;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = -n + 1; i < n; i++)
	{
	  if (i < 0)
		{
		  l = -i;
		}
	  else
		{
		  l = i;
		}
	  for (s = 0; s < n - l; s++)
		{
		  printf (" ");
		}
	  for (j = 0; j < l + 1; j++)
		{
		  printf ("* ");
		}
	  printf ("\n");
	}
  return 0;
}
