#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
	adana,adiyaman,afyon,agri,amasya,kayseri,kahramanmaras,istanbul,trabzon,izmir
};

int main() {
	
	enum sehirler il;
	il=afyon;
	printf("%d",il+1);
	
	
	
	
	
	return 0;
}
