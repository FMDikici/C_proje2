#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

//fibonacci serisinin ilk 10 elemanýný listeleyen kod	
//ANLAMADIM


	int a,b,c,i;
	
	a=1;
	b=1;
	
	for (i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	return 0;
}
