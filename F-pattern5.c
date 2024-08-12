/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int limit,i,j,k,l;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=0;j<((i*3)+2);j++){
            printf("* ");
        }
        printf("\n");
        if(i<limit-1){
            for(k=0;k<=i;k++){
                for(l=0;l<=i;l++){
                    printf("* ");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
* * 
* 
* * * * * 
* * 
* * 
* * * * * * * * 
* * * 
* * * 
* * * 
* * * * * * * * * * * 
* * * * 
* * * * 
* * * * 
* * * * 
* * * * * * * * * * * * * * 

