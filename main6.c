#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	//float deðiþkenler 
	float s1,s2,s3,proje,ort;
	
	s1=72;
	s2=46;
	s3=88;
	proje=90;
	ort= (s1+s2+s3+proje)/4;
	
	printf("Donem Sonu Notunuz: %f", ort); 
	
	float kisa,uzun,cevre,alan;
	
	kisa=11.4;
	uzun=20.6;
	
	cevre=(kisa+uzun)*2;
	alan=(kisa*uzun);
	
	printf("Dikdorgenin cevresi %f", cevre);
	printf("\n");
	printf("Alani ise %f", alan);
	
	
	
	
	
	
	
	return 0;
}
