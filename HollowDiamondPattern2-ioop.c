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
  int n, i, j, l, s;
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
	  for (j = 0; j < (2 * n - l + 1); j++)
		{
		  if (j < l)
			{
			  printf ("  ");
			}
		  else
			{

			  if ((j == l) || (j == (2 * n - l)))
				{
				  printf ("* ");
				}
			  else
				{

				  printf ("  ");
				}
			}
		}
	  printf ("\n");
	}
  return 0;
}
