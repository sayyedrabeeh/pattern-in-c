/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern :  

* * * * * * * 

* *       * * 

*   *   *   * 

*     *     * 

*   *   *   * 

* *       * * 

* * * * * * * 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<2*n+1;j++)
		{
			if((j==0)||(j==i)||(j==2*n)||(j==2*n-i)||(i==0)||(i==2*n))
			{
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n\n");
	}
	return 0;
}