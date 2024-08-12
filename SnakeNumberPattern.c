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
  int n, i, j, k = 0;			//use64 to onwords for ABCDE..//use 96 onwords fpr abcde..
  printf ("Enter the limit : ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
		{
		  if (i % 2 == 0)
			{
			  k = k + 1;
			  printf ("%d ", k);	//use %c instead of %d for print alphabets
			}
		  else
			{

			  printf ("%c ", k);
			  k = k - 1;
			}

		}
	  k = k + n;
	  printf ("\n");
	}

  return 0;
}
A B C D E 
J I H G F 
K L M N O 
T S R Q P 
U V W X Y 
