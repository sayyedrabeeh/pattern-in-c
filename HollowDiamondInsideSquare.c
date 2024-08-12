/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
	int n,i,j,s,k,l;
	printf("Enter the limit :");
	scanf("%d",&n);
	for(i=-n;i<=n;i++){
		if(i<=0){
			l=-i;
		}else{
			l=i;
		}
		for(s=0;s<=l;s++){
			printf("* ");
		}
		k=n-l;
		for(j=0;j<(2*k);j++){
			printf("  ");
		}
		for(s=0;s<=l;s++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
5
Enter the limit :* * * * * * * * * * * * 
* * * * *     * * * * * 
* * * *         * * * * 
* * *             * * * 
* *                 * * 
*                     * 
* *                 * * 
* * *             * * * 
* * * *         * * * * 
* * * * *     * * * * * 
* * * * * * * * * * * * 
