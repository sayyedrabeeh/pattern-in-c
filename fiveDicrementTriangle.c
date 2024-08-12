/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

code for the following pattern : 

5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k;
	printf("Enter the limit  : ");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",k++);
		}
		k=k-i-2;
		printf("\n");
	}
	return 0;
}