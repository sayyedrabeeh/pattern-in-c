/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

program for the following code : 
* 
* 1 * 
* 1 2 1 * 
* 1 2 3 1 2 * 
* 1 2 3 4 1 2 3 * 
* 1 2 3 4 5 1 2 3 4 * 
* 1 2 3 4 1 2 3 * 
* 1 2 3 1 2 * 
* 1 2 1 * 
* 1 * 
* 

*******************************************************************************/
#include <stdio.h>
	int main(){
		int n,i,j,k,l,m,count=0;
		printf("Enter the limit : ");
		scanf("%d",&n);
		for(i=-n;i<=n;i++){
			if(i<=0){
				l=-i;
			}else{
				l=i;
			}
			k=n-l;
			for(j=0;j<(2*k)+1;j++){
			    m=j;
				if((j==0)||(j==2*k)){
					printf("* ");
				}else if(j<=(((2*k)/2))){
					printf("%d ",j);
				}else{
					printf("%d ",m-k);
					
				}
			}
			printf("\n");
		}
	
		return 0;
}