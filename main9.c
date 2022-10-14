#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/*int sayi;
	
    printf("girdiðiniz sayi: ");
	scanf("%d",&sayi);
	
	if (sayi%2==0)
	{
		printf("girdiginiz sayi tam bolunur");
    }
	else
	{
		printf("girdiginiz sayi tam bolunmez");
	}
	*/
	
	// KLAVYEDEN GÝRÝLEN DERECEYE GÖRE SUYUN DURUMUNU YAZDIRAN PROGRAMI KODLAYIN
	
	//0ve altý buz
	//0 100 arasý su
	//100 ve üstü buhar
	
/*	int sicaklik;
	printf("****Suyun Durumu****\n\n");
	
	printf("suyun sicakligini giriniz: ");
	scanf("%d",&sicaklik);
	
	if (sicaklik<=0)
	{
		printf("Su buz durumundadir");
	}
	if ( 0<sicaklik<100 )
	{
	printf("Su sivi durumdadir");
	}
	if (sicaklik>=100)
	{
		printf("Su buhar durumdadir");
	} */
	
	
	printf("***ortalama hesaplama***\n");
	
	int s1,s2,s3,proje,ort;
	
	printf("1.sinav notunuzu giriniz: ");
	scanf("%d\n",&s1);
	
    printf("2.sinav notunuzu giriniz: ");
    scanf("%d\n",&s2);
    
    printf("3.sinav notunu giriniz: ");
    scanf("%d",&s3);
    
    printf("proje notunuzu giriniz: ");
    scanf("%d",&proje);
    
    ort=s1+s2+s3+proje/4;
    
    if (ort<50)
     {
     	printf("Diploma notu FF");
	 }
	 
	 if(50<=ort<60)
	 {
	 	printf("Diploma notu DD");
	 }
	 
	 if (60<=ort<70)
	 {
	 	printf("Diploma notu CC");
	 }
	 
	 if(70<=ort<85)
	 {
	 	printf("Diploma notu BB");
	 }
	 
	 if	 (85<=ort<=100)
	 {
	 	printf("Diploma notu AA");
	 }
	
	
	
	
	
	
	
	
	
	return 0;
}
