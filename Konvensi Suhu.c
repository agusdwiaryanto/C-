/* Progam Konvensi Suhu */
#include<stdio.h>
main()
{
	float Celcius,Farenheit,Reamur,Kelvin;
	printf("Masukkan Suhu Dalam Celcius =");
	scanf("%f", &Celcius);
	printf("Farenheit=%f\n",Celcius*9/5+32);
	printf("Reamur=%f\n",Celcius*4/5);
	printf("Kelvin=%f\n",Celcius+273.15);	
}
