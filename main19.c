#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	
char sehir[15];
int i;
	
for(i=0;i<2;i++)
{
	printf("sehir giriniz ");
	scanf("%s", &sehir);
}
*/


int dizi[100];
int i,sayi;

printf("eleman sayisi: ");
scanf("%d", &sayi);

for(i=0;i<sayi;i++)
{
	printf("sayinin %d . degeri :", i+1);
	scanf("%d", &dizi[i]);
}
printf("\n\n");

for(i=0;i<sayi;i++);
{
	printf("%d", dizi[i]);
}

	
	return 0;
}
