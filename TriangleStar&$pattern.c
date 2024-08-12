/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Program for the following pattern : 

* 
$ * 
* $ * 
$ * $ * 
* $ * $ * 
$ * $ * $ * 
* $ * $ * $ * 
*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,k;
	printf("Enter the limit : ");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(k%2==0)
			{
				printf("$ ");
			}else{
				printf("* ");
			}
			k++;
		}
		k=k-i-2;
		printf("\n");
	}
	return 0;
}
