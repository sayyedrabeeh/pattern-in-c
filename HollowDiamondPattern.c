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
	  for (s = 0; s < l; s++)
		{
		  printf ("  ");
		}
	  for (j = 0; j < (2 * (n - l) + 1); j++)
		{
		  if ((j == 0) || (j == (2 * (n - l))))
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
        *   * 
      *       * 
    *           * 
  *               * 
*                   * 
  *               * 
    *           * 
      *       * 
        *   * 
          * 