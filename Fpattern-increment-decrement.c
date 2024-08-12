/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern :  

* * * * * * * * * * * * * * * * 
* 
* * * * * * * * * * * * * * 
* * 
* * * * * * * * * * * * 
* * * 
* * * * * * * * * * 
* * * * 
* * * * * * * * 
* * * * * 
* * * * * * 
* * * * * * 
* * * * 
* * * * * * * 

*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<((3*n)-2*i-2);j++)
		{
			printf("* ");
		}
		printf("\n");
		for(k=0;k<i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}