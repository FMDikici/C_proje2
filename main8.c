#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float s1,s2,toplam;

printf("birinci sinav sonucunu giriniz:");
scanf("%f", &s1);

printf("ikinci sinav sonucunu giriniz: ");
scanf("%f", &s2);

toplam= (s1+s2)/2;
printf("%f\n",toplam);

if (toplam>=70)
{
	printf("Ana Havuza Girmeye Hak KAZANDINIZ!");
}
else 
{
	printf("Ana Havuza Girmeye Hak KAZANAMADINIZ!");
}
	
	
	
	return 0;
}
