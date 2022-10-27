#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int gun;
	printf("gun degeri gir: ");
    scanf("%d", &gun);
    switch(gun)
{
	case 1:
		printf("pazartesi\n");
		break;
		case 2:
	    printf("sali\n");
	    break;
	    case 3:
		printf("carsamba\n");
	    break;
	    case 4:
	    printf("persembe\n");
	    break;
	    case 5:
	    printf("cuma\n");
	    break;
	    case 6:
	    printf("cumartesi\n");
	    break;
	    case 7:
	    printf("pazar\n");
	    break;
	    default : printf("oyle bi gun yok");

	}	
	
	
	
	
	
	
	
	
	return 0;
}
