/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern : 

        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k=0,s;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(s=0;s<n-i;s++)
	    {
	        printf("  ");
	    }
		for(j=0;j<2*i-1;j++)
		{
			if(j<=(2*i-1)/2)
			{
			    printf("%d ",++k);
			    
			}else{
			    
			    printf("%d ",--k);
			}
		}
		
		
		
		printf("\n");
	}
	return 0;
}