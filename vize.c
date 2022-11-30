#include <stdio.h>
#include <stdlib.h>

int main() {
	
//if else	
	
/*int vize,final,ort;

printf("vize  notunuzu giriniz: ");
scanf("%d", &vize);
printf(" final notunuzu giriniz: ");
scanf("%d", &final);
ort=vize* 0.4 + final* 0.6;
printf("%d", ort);

if(ort>=90)

	printf("a aldiniz");

else if(ort>=80)

    printf("b aldiniz");

else if(ort>=65)

    printf("c aldiniz");

else

    printf("d notu aldýnýz"); 

*/	


//2- switch case(tekrar et)

/* a,b,c,islem;

printf("uc sayi giriniz: ");
scanf("%d %d %d", &a,&b,&c);

printf("1.ort yazdir:\n");
printf("2.en küçük yazdir:\n");
printf("3.en büyük yazdir:\n");
printf("Islem seciniz:");
scanf("%d",&islem);

switch(islem)
	{
		case 1:
		printf("%f",(a+b+c)/3.0);
		break; 
		case 2:
		a<b&&a<c;
		printf("%d",a);
		break; 
		case 3: 
		if(a>b&&a>c)
			printf("%d",a);
			else if(b>c)
			printf("%d",b);
			else 
			printf("%d",c);
		break;
		default:
		printf("Yanlis girdiniz!");
		break;
	}*/

//3-

/*int sifre=12345;
int giris;
printf("sifreyi giriniz: ");
scanf("%d", &giris); 
if(sifre==giris)
printf("giris basarili");
else
{
	printf("tekrar deneyiniz");
	printf("ben baska satirim");
}
*/

//4- (yýldýz oluþturma bak!) !!!!!

/*int n,i,j,k,l;
scanf("%d", &n);


for(i=1;i<n;i++)
{
	for(j=0;j<i;j++)
	{
		printf("*");
	}
	printf("\n");
}
for(k=1;k<n;k++)
{
	for(l=n-1;l>k;l--)
	{
		printf("*");
	}
	printf("\n");
}
*/

//5-faktoriyel(bak önemli)

/*int i,n;
double faktoriyel;
do{
faktoriyel=1;
printf("bir sayi giriniz: ");
scanf("%d",&n);
if(n==0) break;
if(n<0) continue;

for(i=1;i<=n;i++)
{
	faktoriyel*=i;
}
printf("%f\n", faktoriyel);
}while(n!=0); */

//(bak)
/*int n;
	int i=1; 
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	
	while(n>=10)
	{
		n=n/10;
		i++; (!)
	}
	
	printf("%d basamakli",i);*/

//(bak)
/*int toplam=0; 
	int i;
	for(i=1;i<=100;i=i+2)
		toplam +=i; 
	toplam=0;
	i=1;
	
	while(i<=100)
	{
		toplam +=i;
		i=i+2; 
	}
	toplam=0;
	i=150;
	do{
		toplam +=i;
		i=i+2; 		
	}while(i<=100);
	
	printf("Toplam: %d",toplam); */



/*int i,n;
scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
*/

//1.vize videosu

//tam bölenleri gösteren program
/*int sayi,i;
printf("sayi giriniz: ");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++)
{
	if(sayi%i==0)
	{
		printf("%d\n",i);
	}
}
*/

//2.vize videosu

/*int sayi=1;
int i;

for(i=1;i<=24;i++)
{
	sayi=sayi*2;
}
printf("%d",sayi);

*/

/*int a,b,c,d,toplam;
printf("1.sayiyi aliniz");
scanf("%d",&a);

printf("2.sayiyi aliniz");
scanf("%d",&b);

printf("3.sayiyi giriniz");
scanf("%d",&c);

printf("4.sayiyi giriniz");
scanf("%d", &d);

toplam=a+b+c+d;

printf("%d",toplam);



int sayi,i,toplam=0;

for(i=1;i<=4;i++)
{
	printf("%d. sayi:", i);
	scanf("%d", &sayi);
	toplam=toplam+sayi;
}
printf("Toplam Sonuc: %d",toplam);


*/

//0 girilene kadar toplama
/*int sayi,toplam=0;

while(sayi!=0)
{
	printf("sayi:");
	scanf("%d",&sayi);
	toplam=toplam+sayi;
}
printf("%d",toplam);
*/

//otopark ücretlendirme sistemi

//1 saat 3tl, 1-4saat 6tl, 4-6saat 8tl, 6-10ssat 10tl

//10+saat için fazla saat hangi aralýktaysa o ucrete tabi tutulacak

/*int saat;
printf("Kac Saat Kaldýnýz: ");
    scanf("%d",&saat);
    switch(saat)
    {
    	case 0 ... 4:
    		printf("10 TL ODE"); break;
    	case 5 ... 9:
		   printf("15 tl ode");break;
		case 10 ... 14:
		   printf("20 tl ode");break;
		default :
		printf("25 tl ode"); break;       	
	}	
*/
//while-for örneði
/*int i,n,fact=1;
 
 printf("fact istediðiniz sayiyi giriniz: ");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 	fact=fact*i;
 	
 }
	printf("%d",fact);*/
	
	/*int i,n,fact=1;
	
	printf("fact istediðiniz sayiyi giriniz: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		fact=fact*n;
	
	n--;	
	}
	printf("%d",fact);*/
	
	
//girilen sayinin rakamlarini toplama

/*	int n,toplam=0;
	
	printf("sayiyi giriniz: ");
	scanf("%d", &n);
	
	do
	{
		toplam += (n%10);
		n=n/10;
	}
	while(n>0);
	
	printf("%d",toplam);
	
*/


/* int i,j,n;
printf("bir sayi giriniz: ");
scanf("%d", &n);

for(i=1;i<n;i++)
{
	for(j=0;j<i;j++)
	{
		printf("*");
	}
	printf("\n");
} */
	
/*int i,j,toplam=0;

for(i=1;i<=81;i+=4)
{
	toplam=toplam+i;
}	
	printf("%d",toplam);
*/



/*int i,toplam,n,m;

printf("birinci sayiyi giriniz: ");
scanf("%d", &n);
printf("ikinci sayiyi giriniz: ");
scanf("%d", &m);
if(n!=m){
for(i=n;i<m;i++)
{
	toplam=toplam+i;
}	
	printf("%d",toplam-1);
}
else
{
	printf("error");
}
*/


	
	return 0;
}
