	#include <stdio.h>
#include <stdlib.h>



int main() {
//ders 45
	
	
	int sayi1=10;
	int sayi2=20;
	double sayi3=10.2;
	char kelime='a';
	
	printf("%d\n",sayi1);
	printf("%d\n",sayi2);
	printf("%f\n",sayi3);
	printf("%c",kelime);
	
	
	printf("\n\n");
	printf("****bellek adresleri****\n\n");
	
	printf("%x\n",&sayi1);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x",&kelime);
	
//ders46	
	//*degisken bellekte yer tutacaðýný gösteriyor;
	
	int sayi=20;
	int *s=&sayi;
	
	//sayiyi yazdirma 
	printf("sayi: %d\n",sayi);
	
	//adresi yazdirma
	printf("adres: %x",s);
	
	
//ders47

char harf='a';
char *s=&harf;

printf("1. adres %x\n",s); //62fe17

s++;

printf("2. adres %x\n",s); //62fe18

s--;

printf("3. adres %x\n",s); //62fe17
s=s+5;

printf("4. adres %x",s);   //62fe1c c=3
	
	
	return 0;
}
