#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	// maaþý 2500tl olan birine yüzde 12 zam yapýlýrsa son maaþý ne olur?
	
	/*float m1,m2;
	
	
	printf("ilk maasinizi giriniz: ");
	scanf("%f", &m1);
	
	m2=m1+(m1*12/100);
	printf("zamlý maasiniz: %f", m2);*/
	
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
	
	
	printf("Yaricapi belirlenmiþ cemberin cevresi: %f", cevre);
	
	
	
	
	
		
	return 0;
}
