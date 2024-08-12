/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  
  code for the following pattern :
  
*               * 
* *           * * 
*   *       *   * 
*     *   *     * 
* * * * * * * * * 
*     *   *     * 
*   *       *   * 
* *           * * 
*               * 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k,l;
	printf("Enter the limit :  ");
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
			if((j==0)||(j==(2*n))||(j==k)||(j==(2*n)-k)||(i==0)) 			{
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}