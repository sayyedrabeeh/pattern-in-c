/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern : 

        A 1       
      A B 1 2     
    A B C 1 2 3   
  A B C D 1 2 3 4 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,A,num;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    A=65;
	    num=1;
		for(j=0;j<=2*n;j++)
		{
			if((j<=n-i-1)||(j>n+i+1))
			{
				printf("  ");
			}else{
				if(j<=n)
				{
					printf("%c ",A++);
				}else{
					printf("%d ",num++);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
