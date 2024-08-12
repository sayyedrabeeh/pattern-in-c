/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,i,j,num;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{   num=i;
		for(j=0;j<(2*n)+1;j++)
		{
			if((j<n-i)||(j>n+i))
			{
				printf("  ");
			}else{
				
				if(j<(n))
				{
					printf("%d ",num--);
				}else{
					printf("%d ",num++);
				}
			}
// 			num++;
		}
		printf("\n");
	}
	return 0;
}
          0           
        1 0 1         
      2 1 0 1 2       
    3 2 1 0 1 2 3     
  4 3 2 1 0 1 2 3 4   
5 4 3 2 1 0 1 2 3 4 5 

         