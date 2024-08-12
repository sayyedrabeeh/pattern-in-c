/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int limit,i,j,k;
   printf("Enter the limit : ");
   scanf("%d",&limit);
   for(i=1;i<=limit;i++){
       for(j=1;j<=i*2;j++){
           printf("* ");
       }
       printf("\n");
       if(i<limit){
       for(k=1;k<=i;k++){
           
           printf("* ");
           printf("\n");
           
       }
       }
   }

    return 0;
}

* * 
* 
* * * * 
* 
* 
* * * * * * 
* 
* 
* 
* * * * * * * * 
* 
* 
* 
* 
* * * * * * * * * * 
