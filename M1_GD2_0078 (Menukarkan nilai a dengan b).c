/* Menukarkan nilai a dengan b */
#include<stdio.h>
main ()
{
	int a,b,c;
	printf("Progam Menukar 2 Buah Nilai \n\n") ;
	printf("Sebelum ditukar \n") ;
	printf("--------------- \n") ;
	printf("Bilangan pertama = ") ;
	scanf("%i",&a) ;
	printf("Bilangan kedua = ") ;
	scanf("%i",&b) ;
	c=a;
	a=b;
	b=c;
	printf("Setelah ditukar \n") ;
	printf("--------------- \n") ;
	printf("Bilangan pertama = %i\n",a) ;
	printf("Bilangan kedua = %i\n",b) ;
}
