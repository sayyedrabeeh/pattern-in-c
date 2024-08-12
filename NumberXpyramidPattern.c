/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  
  programe for the following pattern :
  
   1       1 
    2     2 
     3   3 
      4 4 
       5 
      4 4 
     3   3 
    2     2 
   1       1 

*******************************************************************************/
#include<stdio.h>
int main(){
	int n,i,j,s,l;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++){
		if(i<=0){
			l=-i;
		}else{
			l=i;
		}
		for(s=0;s<n-l;s++){
			printf(" ");
		}
		for(j=0;j<l+1;j++){
			if((j==0)||(j==l)){
				printf("%d ",n-l+1);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}