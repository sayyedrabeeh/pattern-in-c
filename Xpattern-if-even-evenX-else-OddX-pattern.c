/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
  
 if(string is odd ) : 
 
     X       X 
      X     X 
       X   X 
        X X 
         X 
        X X 
       X   X 
      X     X 
     X       X 
 
if(string is even ) : 
    
    X         X 
      X     X   
        X X     
        X X     
      X     X   
    X         X
    
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
	int len,i,j,k,l,m;
	char Str[20];
	printf("Enter the string : ");
	gets(Str);
	len = strlen(Str);
	printf("Length of the string : %d\n",len);
	if(len%2==0)
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if((j==i)||(j==len-i-1))
				{
					printf("X ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
	}else{
	     	for(i=-len+1;i<len;i++)
		{
			if(i<=0)
			{
				l=-i;
			}else{
				l=i;
			}
			m=len-l;
			for(j=0;j<len-l;j++)
			{
				printf(" ");
			}
			for(k=0;k<l+1;k++)
			{
				if((k==0)||(k==l))
				{
					printf("X ");
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}