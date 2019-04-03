#include<stdio.h>

main()
{
	char judul[15];
	float jumlah, harga, diskon;
		printf("Masukkan judul bukumu = "); scanf("%s", &judul);
		printf("Masukkan jumlah bukumu = "); scanf("%f", &jumlah);
		printf("Masukkan harga bukumu = "); scanf("%f", &harga);
		printf("Masukkan diskon bukumu = "); scanf("%f", &diskon);
		printf("------------------------------------------------------");
		printf("\n Total harga Rp%.2f , ", jumlah*harga-diskon);
}
