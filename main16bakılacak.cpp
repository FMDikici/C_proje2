#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
/*int sayi1,sayi2,sonuc;
char islem;

sayi1=75;
sayi2=15;

printf("islemi giriniz: ");
scanf("%s", &islem);

switch(islem)
{
	case'+':
		sonuc=sayi1+sayi2;
		printf("sonuc: %d", sonuc);
	break;
		
	case'-':
	    sonuc=sayi1-sayi2;
	    printf("sonuc: %d", sonuc);
	break;	
	
	case'*':
		sonuc=sayi1*sayi2;
		printf("sonuc: %d", sonuc);
	break;
	
	
	case'/':
	    sonuc=sayi1/sayi2;
		printf("sonuc: %d", sonuc);
	break;

	default: printf("error");	
} 
*/


int secim;

printf("matematik menusu\n");
printf("****************");

printf("1-karede alan ve cevre hesabi\n");
printf("2-girilen sayinin kupunu alan program\n");
printf("3-cemberde alan ve cevre hesabi\n");
printf("4- 10x+2+7x+9 x'e gore islemin sonucu");
printf("5-dikdortgende alan ve cevre hesabi\n");


printf("isleminizi giriniz: ");
scanf("%s", &secim);

switch(secim)
{
 {
	case 1:
		int a,alan,cevre;
		printf("karenin kenarini giriniz: ");
		scanf("%d",&a);
		alan=a*4;
		cevre=a*4;
		printf("karenin alani %d", alan);
		printf("karenin cevresi: %d", cevre);
	break;
}
	
{
		case 2:
		
	    int sayi,sonuc;
		printf("sayiyi giriniz:")
		scanf("%d", &sayi);
		sonuc=sayi*sayi*sayi;
		printf("girilen sayinin kupu %d",sonuc);
	break;
}
{
	case 3:
	
        int r;      
		float pi,alan,cevre;
		pi=3.14;
		printf("yaricapi giriniz: ");
		scanf("%d", &r);
		
		alan=pi*r*r;
		cevre=2*r*pi;
		
		printf("cemberin alani: %f\n", alan);
		printf("cemberin ceversi %f", cevre);
	break;
{
	case 4:
		
        int x,sonuc;
        printf("X degerini giriniz : ");
        scanf("%d",&x);
        sonuc=(5*x*2) + (7*x) + 9;
        printf("Islemin sonucu : %d",sonuc);
   break;
}
{
    case 5:
   	    int k,u,cevre,alan;
   	    
   	    printf("kýsa kenari giriniz: ");
   	    scanf("%d", &k);
   	
   	    printf("uzun kenari giriniz: ");
   	    scanf("%d", &u);
   	
        alan=k*u;
        cevre=2*(k+u);
    
        printf("alan: %d", alan);
        printf("cevre: %d", cevre);
    break;
}
    default("error");
}

	      	
		
		
		
		
		
		
		
}
 

	
	
		
	return 0;
}
