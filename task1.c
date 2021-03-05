
#include<stdio.h>
#include<string.h>

void main()
{
	char x[]="sir ok ram  is name my";
	int n=strlen(x);
     char* p;
	 char* p1;
	int c=0,t1,t2,t;
	t1=n-1;
	t2=n-1;
	 
	for(char i=strlen(x)-1;i>-1;i--)
	{   
          
	   if(x[i]== ' ' )
	   {
		   for(int j=c;j>1;j--)
		   {   
			   t=t1;
			   t1=i;
			   i=t;
			   printf("%c\n",x[i]);	
		   }
		   
	   } 
        c++;	   
	   
	  
	}
}