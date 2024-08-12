/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following pattern : 

* A * B * C 
 * D * E * 
  * F * G 
   * H * 
    * I 
     * 
    * J 
   * K * 
  * L * M 
 * N * O * 
* P * Q * R 

*******************************************************************************/
#include <stdio.h>
int main()
{
	int n,i,j,s,l,k,A=65;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<=0)
		{
			l=-i;
		}else{
			l=i;
		}
		for(s=0;s<n-l;s++){
		    printf(" ");
		}
		for(j=0;j<l+1;j++)
		{
			if(j%2==0)
		    {
		        printf("* ");
		    }else
		    {
				printf("%c ",A++);
			}
			
		}
		printf("\n");
	}
	return 0;
}