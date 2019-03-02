#include <stdio.h>
#include <stdlib.h>


int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*calarray[4])(int a,int b)={plus,minus,multiply,divided};
char dd[]={'+','-','*','/'};

int main()
{
	int a=0, c=0;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF---------------------------------------------------
/*	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	else if (b == '/')
		printf("%d %c %d = %d\n", a, b, c, divided(a, c));

*/
	// array functuion pointer-------------------------------------
	
	int i ;

	if (a != 0)
	 for(i=0;i<4;i++)
	{
		
	  if(  b == dd[i] )
		{
		printf("%d %c %d = %d\n", a, b, c, calarray[i](a,c));
		break;	
	   	}
	}
	
}


	
    
	 



