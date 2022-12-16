#include <stdio.h>
#include <stdlib.h>

struct kayit{
	char ad[20];
	int sinif;
	int no;
	float ort;
	 	
};
struct kayit ogr;
int main() {
	
	printf("ad girin: ");
	scanf("%s",&ogr.ad);
	
	printf("sinif girin: ");
	scanf("%d", &ogr.sinif);
	
	printf("no girin: ");
	scanf("%d",&ogr.no);
	
	printf("ort girin: ");
	scanf("%.2f",&ogr.ort);
	
	printf("%s\n",ogr.ad);
	printf("%d\n",ogr.sinif);
	printf("%d\n",ogr.no);
	printf("%.2f",ogr.ort);	
	
	
	
	
	return 0;
}
