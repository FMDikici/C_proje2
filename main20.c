#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,j,l,k;
	scanf("%d", &n);
for(i=1;i<n;i++)	
	{
		for(j=1;j<i;j++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	}
	
for(k=1;k<n;k++)
{
	for(l=n-1;l>k;l--)
	{
		printf("*");
	}
printf("\n");
}

	
	
	
	
	
	return 0;
}
