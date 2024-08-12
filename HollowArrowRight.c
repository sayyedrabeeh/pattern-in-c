/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n, i, j, s, l;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = -n; i <= n; i++)
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
		  printf ("  ");
		}
	  for (j = 0; j < n; j++)
		{
		  if ((j == 0) || (j == n - 1) || (i == -n) || (i == n))
			{
			  printf ("* ");
			}
		  else
			{
			  printf ("  ");
			}
		}
	  printf ("\n");
	}

  return 0;
}

