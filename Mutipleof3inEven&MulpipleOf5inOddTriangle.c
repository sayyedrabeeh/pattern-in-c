/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
	int n,i,j,X,Y,l=1,m=1;
	printf("Enter the limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j%2==0)
			{
				X = 3*l;
				printf("%d ",X);
				l++;
			}
			else
			{
				Y=5*m;
				printf("%d ",Y);
				m++;
			}
		}
		printf("\n");
	}
	return 0;
}
3 
6 5 
9 10 12 
15 15 18 20 
21 25 24 30 27 
