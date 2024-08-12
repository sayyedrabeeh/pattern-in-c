/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern : 

1 
1 2 
2 
2 
3 4 5 
3 
3 
3 
6 7 8 9

*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i,j,k,x=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d \n",i+1);
		}
		for(k=0;k<i+2;k++)
		{
			printf("%d ",x++);
		}
		printf("\n");
	}
	return 0;
}