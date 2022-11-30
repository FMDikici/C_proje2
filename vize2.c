#include <stdio.h>
#include <stdlib.h>



int main() {
/*
int i,j,k,l,n;

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
/*
int i,n;
double fact;
do{
	fact=1;
	printf("bir sayi giriniz");
	scanf("%d",&n);
	if(n==0) break;
	if(n<0) continue;
	
	for(i=1;i<=n;i++)
	{
		fact *=i;
	}
	printf("%f\n",fact);
}
while(n!=0);i
*/
/*
int n,i,fact=1;
scanf("%d", &n);

for(i=1;i<=n;i++)
{
	fact= fact*i;
	if(n>0);
	{
	printf("%d",fact);
	}
	else
	{
		printf("error"};
    }
}

*/
/*
int a,b,c,islem;
print("uc sayi giriniz: ");
scanf("%d %d %d", &a, &b, &c);


printf("1. ortalama yazdýr:");
printf("2. en kucuk yazdýr:");
printf("3. en buyuk sayi yazdir:");
printf("islem seciniz: ");
scanf("%d",&islem);

switch(islem)
{
	case 1: printf("%d", (a+b+c)/3);
	break;
	case 2: 
	if(a<b&&a<c)
	{
	    printf("%d",a);
    }
    else if(b<a&&b<c)
    {
    	printf("%d",b);
	}
	else 
	{
		printf("%d",c);
	}
	break;
	case 3:
	if(a>b&&a>c)
	{
	    printf("%d",a);
    }
    else if(b>a&&b>c)
    {
    	printf("%d",b);
	}
	else 
	{
		printf("%d",c);
	}
	break;
	deafult: 
	printf("error");
	break;
}

*/
/*
int toplam=0; 
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
	
	printf("Toplam: %d",toplam);
*/


/*
int sayi1,sayi2,temp; 
	int i,j;
	do{

	printf("1. sayiyi giriniz (cikis -1):");
	scanf("%d",&sayi1);
	if(sayi1==-1) break; 
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) 
	for(i=sayi1;i<=sayi2;i++)
	{
		
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				break;
			}
		}
		if(i==j) printf("%d ",i);
		
	}
}while(1);
*/


/*	int a=1;
	float b=2.3;
	double c=4.5;
	char ch='a';
	 
	printf("Merhaba Dunya! %d %f %lf %c",a,b,c,ch);
	
	c=(a+b)*(c*a); 
	b=a*c; 
	b=--c + --a; 
	// == != < > <= >= && ||
	if(a>=c || b<c)
	{
		printf("Merhaba Dunya! %d %f %lf %c",a,b,c,ch);
		printf("another print");
	}
	else if(c>b) 
		printf("deneme");
	else 
		printf("hicbir kosula uymadi!");
		
	int i,toplam=0,num; 
	do
	{
			scanf("%d",&num);
			if(num==0) break;
			if(num<0) continue;
			toplam += num; 
	i++;
	}while(num!=0);
	printf("%f",(float)toplam/i);

	
	int i,j;
	int x,y,t; 
	scanf("%d %d",&x,&y);
	if(x>y) {
			t=x;
			x=y;
			y=t; 
			}
	for(i=x;i<=y;i++)
	{
		for(j=x;j<=y;j++)
			printf("%2d*%2d=%2d ",i,j,i*j);
		printf("\n");
	}
		
	*/
	/*
	int n,i,j,toplam; 
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
	toplam=0;
	for(i=1;i<j;i++)
		if(j%i==0)
			toplam+=i;
	if(toplam==j) printf("%d ",j);
	}
	*/
	// 4
	// 4 3
	// 4 3 2 
	// 4 3 2 1
	
/*	int i,j,n,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		for(j=0;j<i;j++)
			printf("%d ",i);
		printf("\n");
	}*/
	


/*	int n;
	int i=1; 
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	
	while(n>=10)
	{
		n=n/10;
		i++;
	}
	
	printf("%d basamakli",i);

*/

/*
int i,n,fact=1;

printf("nyi girin: ");
scanf("%d", &n);

for(i=1;i<=n;i++)
{
	fact=fact*i;
}
printf("%d",fact);
*/

int i,j,k,l,n;

scanf("%d", &n);

for(i=0;i<=n;i++)
{
	for(j=1;j<i;j++)
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

	
	return 0;
}
