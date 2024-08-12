/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Program for the following code : 
* 
* 
* 
* * * 
* 
* 
* 
* * * 
* * * 
* 
* 
* 
* * * 
* * * 
* * *
2nd condition : 
* 
* * * 
* 
* * * 
* * * 
* 
* * * 
* * * 
* * * 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int limit,i,j,k,l;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        
        for(j=0;j<3;j++){ //for the 2 nd condition  use j<1 
            printf("* ");
            printf("\n");
        }
        
        for(k=0;k<i+1;k++){
            for(l=0;l<3;l++){
                printf("* ");
            }
            printf("\n");
        }
        
    }

    return 0;
}

