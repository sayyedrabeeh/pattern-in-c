/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following code : 

*                     * 
* *                 * * 
*   *             *   * 
*     *         *     * 
*       *     *       * 
* * * * * * * * * * * * 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n;j++)
		{
			if((j==0)||(j==i)||(j==2*n-1)||(j==2*n-i-1)||(i==n-1))
			{
				printf("* ");
			}else{
			    printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
