#include <stdio.h>
#include <stdlib.h>



int main() {
	
 
    int sinir, gecici;
    int dizi[100];
    printf("Girilecek sayi adeti: ");
    scanf("%d", &sinir);  // Ka� adet say� girilece�i kullan�c�dan ��renilir
 
    int i;
    for(i=0; i<sinir; i++){  //Kullan�c�dan say�lar al�n�r
        printf("%d Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    //Al�nan say�lar ekrana yazd�r�l�r
    for(i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    printf("\n\n"); 
    
    int j;
    //Bubble sort algoritmas� (K���kten b�y��e s�ralama yapar)
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
    //Dizinin s�ralanm�� halini ekrana yazd�r�r
    for(i=0; i<sinir; i++)
        printf("%d ", dizi[i]);
    
    printf("\n");
    system("pause");
	
	
	
	
	return 0;
}
