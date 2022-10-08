#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	
	char kitapadi[40]= "Milenaya Mektuplar";
	char kitapyazari[20]= "Franz Kafka";
	char kitapturu[20]= "Romantizm";
	char sayfasayisi[10]= "250";
	
	
	
	printf("******** KITAP TANITIM********\n");
	printf("kitapadi: %s - kitapyazari: %s\n",kitapadi,kitapyazari);
	printf("kitapturu: %s\n",kitapturu);
	printf("sayfasayisi: ½s\n",sayfasayisi);
	printf("****************");

	
	
	
	//printf("%s\n",kitapadi); ==> direk kitap adını verdi
	//printf("kitapadi: %s",kitapadi); ==> yazacağımız şeyin kitap adı olduğunu belirterek yazdık
	
	return 0;
}