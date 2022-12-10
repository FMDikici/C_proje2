#include <stdio.h>
#include <stdlib.h>



int main() {
	
 
    int sinir, gecici;
    int dizi[100];
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Kaç adet sayý girileceði kullanýcýdan öðrenilir
 
    int i;
    for(i=0; i<sinir; i++){  //Kullanýcýdan sayýlar alýnýr
        printf("%d Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Alýnan sayýlar ekrana yazdýrýlýr
    for(i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); 
    
    int j;
    //Bubble sort algoritmasý (Küçükten büyüðe sýralama yapar)
    for(i=0; i<sinir; i++)
	{
        for(j=0; j<sinir-1-i; j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    //Dizinin sýralanmýþ halini ekrana yazdýrýr
    for(i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
	
	
	
	
	return 0;
}
