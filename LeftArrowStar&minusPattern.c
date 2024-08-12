/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern : 

* - * - * - * - 
* - * - * - * - 
* - * - * - 
* - * - * - 
* - * - 
* - * - 
* - 
* - 
* - * - 
* - * - 
* - * - * - 
* - * - * - 
* - * - * - * - 
* - * - * - * - 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k,l;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n+1;i<n;i++)
	{   
	    if(i<0){
	        l=-i;
	    }else if((i==0)||(i==1)){
	        continue;
	    }else{
	        l=i;
	    }
	    k=n-l;
        
        for(j=1;j<=2*n-2*k;j++)
		{
			if(j%2==0)
			{
				printf("- ");
			}else{
				printf("* ");
			}
			
		}
		
		printf("\n");
		for(j=1;j<=2*n-2*k;j++)
		{
			if(j%2==0)
			{
				printf("- ");
			}else{
				printf("* ");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
