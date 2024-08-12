/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
  int n,i,j,k,s;
  printf("Enter the limit : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
       for(s=i;s<n;s++){
            printf("  ");
	}
	for(j=i;j<=(2*i - 1);j++){
		printf("%d ",j);
	}
	for(k=(2*i - 2);k>=i;k--){
		printf("%d ",k);
	} 
	printf("\n");
  }
  return 0;
}
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
