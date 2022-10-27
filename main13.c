#include <stdio.h>
#include <stdlib.h>



int main() {
	/*
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
	*/
	
	int sayi=486;
	int yuzler,onlar,birler;
	
	yuzler=sayi/100;
	printf("%d\n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("%d\n",onlar);
	
    birler=sayi%10;
    printf("%d\n",birler);
	
	
	return 0;
}
