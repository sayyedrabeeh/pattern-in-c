/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
	int n,i,j,s,k,l;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++){
		if(i<=0){
			l=-i;
		}else{
			l=i;
		}
		k=n-l;
		for(s=0;s<l;s++){
			printf("  ");
		}
		for(j=0;j<(2*k)+1;j++){
			printf("%d ",j+1);
		}
		printf("\n");
	}
	return 0;
}          1 
        1 2 3 
      1 2 3 4 5 
    1 2 3 4 5 6 7 
  1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 11 
  1 2 3 4 5 6 7 8 9 
    1 2 3 4 5 6 7 
      1 2 3 4 5 
        1 2 3 
          1 
