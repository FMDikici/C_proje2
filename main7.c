#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	// maa�� 2500tl olan birine y�zde 12 zam yap�l�rsa son maa�� ne olur?
	
	/*float m1,m2;
	
	
	printf("ilk maasinizi giriniz: ");
	scanf("%f", &m1);
	
	m2=m1+(m1*12/100);
	printf("zaml� maasiniz: %f", m2);*/
	
	//cemberde alan pi*r*r
	//cemberde cevre pi*2*r
	
	float pi,yaricap,cevre,alan;
	
	pi=3.14;
	cevre= 2*yaricap*pi;
	alan= pi*yaricap*yaricap;
	
	printf("yaricap: ");
	scanf("%f", &yaricap);
	
	cevre= 2*yaricap*pi;
	alan= pi*yaricap*yaricap;
	
	printf("yaricapi belirlenmis cemberin alani: %f", alan);
	printf("\n");
	
	
	printf("Yaricapi belirlenmi� cemberin cevresi: %f", cevre);
	
	
	
	
	
		
	return 0;
}
