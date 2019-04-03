/* Progam Membuat Menu Pengulangan */
#include<stdio.h>
main()
{
	int pilih;
	do
	{
		printf("DAFTAR MENU MAKANAN \n");
		printf("------------------------- \n");
		printf("1. Pecel Lele \n");
		printf("2. Tempe Bakar \n");
		printf("3. Ayam Bakar  \n");
		printf("4. Bakso Sapi \n");
		printf("\n");
		
		printf("MASUKKAN PILIHAN ANDA !!! (0=SELESAI)");
		scanf("%i",&pilih);
	switch(pilih) {
	case 1:
		printf("Harga Pecel Lele Rp.5000,- \n"); break;
	case 2:
		printf("Harga Tempe Bakar Rp.5000,- \n"); break;
	case 3:
		printf("Harga Ayam Bakar Rp.15000,- \n"); break;
	case 4:
		printf("Harga Bakso Sapi Rp.10000,- \n"); break;
	case 0:
		printf("Selesai\n");
		break;
	}		
	} while (pilih!=0);
}
