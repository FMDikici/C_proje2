#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

/*int sayilar[]={5,8,7,3,6,9};
	
int i;

for(i=0;i<6;i++)
{
	printf("%d\n", sayilar[i]);
}
*/	
int sayilar[]={10,15,20,35};
int i,toplam;

for(i=0;i<4;i++)
{
	toplam=toplam+sayilar[i];
}
    
    printf("Toplam= %d", toplam);	
	
	
	
	
	return 0;
}
