/* Progam Mencari Deret Pangkat-2 */
#include<stdio.h>
main()
{
	float awal,akhir,bil,hasil;
	print("Bilangan pertama :"); scanf("%f",&awal);
	printf("Bilangan terakhir :"); scanf("%f",&akhir);
	bil=awal;
	printf("Hasilnya =\n\n");
	do{
		for(bil=awal;bil<=akhir;bil++){
		hasil=bil*bil;
		printf("\n%.f X %.0f = %.0f",bil,bil,hasil);
	}
	}
	while(bil=akhir);
}
	

