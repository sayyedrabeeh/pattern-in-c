/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

progrme for the followinf pattern :
* * * 
* * * 
* 
* * * * * * 
* * * * * * 
* 
* * * * * * * * * 
* * * * * * * * * 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int limit,i,j,k,l;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=0;j<2;j++){
            for(k=0;k<(3*(i+1));k++){
                printf("* ");
            }
            printf("\n");
        }
        if(i<limit-1){
            for(l=0;l<1;l++){
                printf("* ");
                printf("\n");
            }
        }
    }

    return 0;
}

