#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/*int sayi;
	
    printf("girdiğiniz sayi: ");
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
	
	// KLAVYEDEN GİRİLEN DERECEYE GÖRE SUYUN DURUMUNU YAZDIRAN PROGRAMI KODLAYIN
	
	//0ve altı buz
	//0 100 arası su
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
	
	int s1,s2,s3,proje;
	float ort;
	
	printf("1.sinav notunuzu giriniz: ");
	scanf("%d\n", &s1);
	
    printf("2.sinav notunuzu giriniz: ");
    scanf("%d\n", &s2);
    
    printf("3.sinav notunu giriniz: ");
    scanf("%d\n", &s3);
    
    printf("proje notunuzu giriniz: ");
    scanf("%d\n", &proje);
    
    ort=(s1+s2+s3+proje)/4;
    
    printf("%f", ort);
    
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
