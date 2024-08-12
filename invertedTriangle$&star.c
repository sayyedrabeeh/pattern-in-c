/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int  main(){
	int n,i,j,s;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			printf("  ");		
		}
		for(j=0;j<n-i;j++)
		{
			if(i%2==0)
			{
				printf("$ ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
$ $ $ $ $ 
  * * * * 
    $ $ $ 
      * * 
        $ 
