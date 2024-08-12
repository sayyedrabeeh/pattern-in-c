/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

1 
2 * 2 
3 * 3 * 3 
4 * 4 * 4 * 4 
5 * 5 * 5 * 5 * 5 
6 * 6 * 6 * 6 * 6 * 6 
5 * 5 * 5 * 5 * 5 
4 * 4 * 4 * 4 
3 * 3 * 3 
2 * 2 
1 


*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k,l;
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
		for(j=0;j<2*k+1;j++)
		{
			if(j%2==0)
			{
				printf("%d ",k+1);
			}else{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
