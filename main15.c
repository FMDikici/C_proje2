#include <stdio.h>
#include <stdlib.h>

 

int main(int argc, char *argv[]) {
	
	int sayi;
	printf("please enter month:");
	scanf("%d", &sayi);
	
	switch(sayi)
	{
		
	case 1: printf("Ocak"); break;
	case 2: printf("Subat"); break;
	case 3: printf("Mart"); break;
	case 4: printf("Nisan"); break;
	case 5: printf("Mayis"); break;
	case 6:	printf("Haziran"); break;
	case 7: printf("Temmuz"); break;
	case 8: printf("Agustos"); break;
	case 9: printf("Eylul"); break;
	case 10: printf("Ekim"); break;
	case 11: printf("Kasim"); break;
	case 12: printf("Aralik"); break;
	default: printf("Error"); break;
	}
	
	
	
	char lesson;
	
	printf("lesson code: ");
	scanf("%s", &lesson);
	
	switch(lesson)
	{
		case 't': printf("turkish"); break;
		case 'm': printf("math"); break;
		case 'f': printf("science"); break;
		case 's': printf("social"); break;
		default:  printf("Error");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
