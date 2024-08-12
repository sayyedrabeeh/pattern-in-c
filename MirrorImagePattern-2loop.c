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
	  for (j = 0; j < n + 1; j++)
		if (j < n - l)
		  {
			printf (" ");
		  }
		else
		  {
			printf ("* ");
		  }
	  printf ("\n");
	}
  return 0;
}
