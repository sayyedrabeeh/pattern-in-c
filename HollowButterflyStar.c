/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i,j,l,k;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<=0)
		{
			l=-i;
		}else{
			l=i;
		}
		k=n-l;
		for(j=0;j<=2*n;j++)
		{
			if((j==0)||(j==k)||(j==2*n)||(j==2*n-k))
			{
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}* *               * * 
*   *           *   * 
*     *       *     * 
*       *   *       * 
*         *         * 
*       *   *       * 
*     *       *     * 
*   *           *   * 
* *               * * 
*                   * 
