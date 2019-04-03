/* Progam Menentukan Kelipatan Bilangan */
#include<stdio.h>
main()
{
	int a,b;
	printf("Masukkan bilangan ke-1 = ");
	scanf("%i",&a);
	printf("Masukkan bilangan ke-2 = ");
	scanf("%i",&b);
	if(a%b== 0)
	printf("%i Merupakan kelipatan dari %i \n",a,b);
	else
	printf("%i Bukan kelipatan dari %i \n",a,b);
}
