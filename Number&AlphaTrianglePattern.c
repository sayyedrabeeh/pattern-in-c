/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  
  program for the following pattern :
 
A 
1 1 
B B B 
2 2 2 2 
C C C C C 
3 3 3 3 3 3 
D D D D D D D

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,num=1,A=65;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(i%2==0)	
			{
				printf("%c ",A);
			}else{
				printf("%d ",num);
			}			
		}
		if(i%2==0)	
			{
				A++;
			}else{
				num++;
			}
		printf("\n");
	}
	return 0;
}