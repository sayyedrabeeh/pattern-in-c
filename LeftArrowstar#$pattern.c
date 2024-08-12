/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following code : 

* # $ * # $ * # $ 
* # $ * # $ 
* # $ 
* # $ * # $ 
* # $ * # $ * # $ 

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,l,Char=35;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<0)
		{
			l=-i;
		}else{
		    l=i;
		}
		for(j=1;j<=2*l+2;j++)
		{
			if(j%2==0)
			{
				printf("%c ",Char++);
				printf("%c ",Char);
			    Char=35;
			}else{
			    printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}