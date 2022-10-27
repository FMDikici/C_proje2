#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
/* int sayi1,sayi2,sonuc;
char islem;

sayi1=75;
sayi2=15;

printf("islemi giriniz: ");
scanf("%s",&islem);

switch(islem)
{
	case '+':
		sonuc=sayi1+sayi2;
		printf("sonuc: %d", sonuc);
		break;
	
	case '-':
	    
		sonuc=sayi1-sayi2;
		printf("sonuc: %d", sonuc);
		break;
		
	case '*':
	    sonuc=sayi1*sayi2;
	    printf("sonuc: %d", sonuc);
	
	case'/':
	    sonuc=sayi1/sayi2;
		printf("sonuc: %d", sonuc);
		break;
		
	default: printf("Error");			
	
	}	*/
	
int secim;
	
 printf("Matematik Menusu\n");
 printf("1-Karede alan ve cevre hesabi\n");
 printf("2-Girilen sayinin kupunu alan program\n");
 printf("3-Cemberde alan ve cevre hesabi\n");
 printf("4-5x2+7x+9 x'e gore islemin sonucu\n");
 printf("5-Dikdortgende alan ve cevre hesabi\n");
 printf("Isleminizi giriniz : ");
 scanf("%d",&secim);
 
 switch(secim)
 {
  case 1:
  {
   int a,alan,cevre;
   printf("Karenin kenarini giriniz : ");
   scanf("%d",&a);
   alan=a*a;
   cevre=a*4;
   printf("Karenin alani : %d \n",alan);
   printf("Karenin cevresi : %d",cevre);
   break;
  }
  case 2:
  {
   int b,sonuc;
   printf("Bir sayi girin : ");
   scanf("%d",&b);
   sonuc=b*b*b;
   printf("Sonuc : %d",sonuc);
   break;
  }
  case 3:
  {
   float pi=3.14,r,alan,cevre;
   printf("Yaricapi giriniz : ");
   scanf("%f",&r);
   alan=pi*r*r;
   cevre=2*pi*r;
   printf("Cemberin alani : %f\n",alan);
   printf("Cemberin cevresi : %f",cevre);
   break;
  }
  case 4:
  {
   int x,sonuc;
   printf("X degerini giriniz : ");
   scanf("%d",&x);
   sonuc=(5*x*2) + (7*x) + 9;
   printf("Islemin sonucu : %d",sonuc);
   break;
  }
  case 5:
  {
   int kisa,uzun,alan,cevre;
   printf("Kisa kenari giriniz : ");
   scanf("%d",&kisa);
   printf("Uzun kenari giriniz : ");
   scanf("%d",&uzun);
   alan=kisa*uzun;
   cevre=2*(kisa+uzun);
   printf("Dikdortgenin alani : %d\n",alan);
   printf("Dikdorgenin cevresi : %d",cevre);
   break;
  }
  
 }
	
	
		
	return 0;
}
