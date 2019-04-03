#include<stdio.h>
main()
{
	float awal, akhir, bil, hasil;
	printf("===============================\n");
	printf("Program Mencari Deret perkalian\n");
	printf("===============================\n\n");
	printf("Bilangan pertama = "); scanf("%f", &awal);
	printf("Bilangan terakhir = "); scanf("%f", &akhir);
bil=awal;
printf("\nHasilnya =\n\n");
do{
	for (bil=awal;bil<=akhir;bil++){
	hasil=bil*bil;
	printf("%.0f X %.0f = %.0f\n", bil, bil, hasil);
}
}
while(bil==akhir);
}
