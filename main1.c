#include <stdio.h>
#include <stdlib.h>



static void (*p[4])void = {sum, subtract, mul, div};

int main(void)
{
	int result;
	int i = 2,j = 3, op = 2;

	result = p[op](i,j);

}

int sum(int a,int b){return a+b;}
int subtract(int a,int b){return a-b;}
int mul(int a ,int b){return a*b;}
int div(int a ,int b){return a/b;}

