/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for this pattern : 
        0 
      1 0 1 
    2 1 0 1 2 
  3 2 1 0 1 2 3 
4 3 2 1 0 1 2 3 4 

*******************************************************************************/
#include <stdio.h>
int main(){
	int n,i,j,k,s;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(s=0;s<n-i-1;s++){
			printf("  ");
		}
		for(j=i;j>=0;j--){
			printf("%d ",j);
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}