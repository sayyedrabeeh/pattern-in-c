/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following code : 

1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 

*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i,j,k=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%2!=0)
			{
				if(k%2==0)
				{
					printf("%d ",0);
				}else{
					printf("%d ",1);
				}
				k--;
			}else{
				if(k%2==0)
				{
					printf("%d ",0);
				}else{
					printf("%d ",1);
				}
				k++;
			}
		}
		printf("\n");
		if(i%2==0)
		{
			k=k+n-1;
		}else{
			k=k+n+1;
		}
	}
	return 0;
}
