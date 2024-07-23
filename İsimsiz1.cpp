#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"renk.h"
int f1(int x, int a);
int main()

{
	f1(1,100);
	textcolor(5);
}
int f1(int x, int a)

{
		if(a<10000)
    	{

	if(x*x*x<a)
    {
	textcolor(x*x*x);
	printf("%i\n",x*x*x);
	f1(x+1,a);
    }
   else
   {
   	f1(1,a+100);

   }

    	return 0;
    }
}
    	
