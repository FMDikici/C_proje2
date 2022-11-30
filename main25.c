#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int satir,sutun,i,j,n,m;
	
	printf("kac satir odugunu giriniz: ");
	scanf("%d", &satir);
	
	printf("kac sutun oldugunu giriniz: ");
	scanf("%d", &sutun);
	
	int matris [satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n[%d][%d]---->",i+1,j+1);
		    scanf("%d", &matris[i][j]);
		}
	}
	
	for(n=0;n<satir;n++)
	{
		for(m=0;m<sutun;m++)
		{
		 printf(" %d ",matris[n][m]);	
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
