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
  int i, j, n, l;
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
	  for (j = 0; j < l + 1; j++)
		{
		  printf ("* ");
		}
		
	  /*for(j=0;j<n+1;j++){  // this is the code used to create opposite of the given
	     if(j<n-l){             code
	     printf("  ");
	     }else{
	     printf("* "); 
	     } 
	   */
	  printf ("\n");
	}

  return 0;
}
* * * * * 
* * * * 
* * * 
* * 
* 
* * 
* * * 
* * * * 
* * * * * 
