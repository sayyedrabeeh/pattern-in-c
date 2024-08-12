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
  int i, j, n, s;
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
	{

	  for (s = 0; s < ((n - i) - 1); s++)
		{
		  printf ("   ");
		}

	  for (j = 0; j < ((i * 2) + 1); j++)
		{
		  printf (" * ");
		}
	  printf ("\n");
	}
  return 0;
}
            * 
          *  *  * 
       *  *  *  *  * 
    *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
