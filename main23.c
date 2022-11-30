#include <stdio.h>
#include <stdlib.h>


int main() {
	
/*int dizi[2][2];
dizi[0][0]= 10;
dizi[0][1]= 20;
dizi[1][0]= 30;
dizi[1][1]= 40;

printf("Matrisin 0-0'da bulunan elemaný %d", dizi[0][0]); */
	
int matris[2][3]={10,20,30,40,50,60};

//unutma c'de 1. her zaman 0 diye baþlar.

/*printf("%d\n",matris[0][0]);
printf("%d",matris[2][3]);	
*/
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\n",matris[i][j]);
	}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
