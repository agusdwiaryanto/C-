/* Program untuk menghitung luas bangun datar */
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int sisi, luas, jari, alas, tinggi;
	char menu[15], ket[30], kode;
	printf("<<MENU PILIHAN LUAS BANGUN DATAR>>");
	printf("\n1. Menghitung Luas persegi");
	printf("\n2. Menghitung Luas lingkaran");
	printf("\n3. Menghitung Luas segitiga");
	printf("\n4. Keluar");
	printf("\n\nPilih Angka <1-2-3-4> : ");
	kode=getche();
	switch (kode)
	{
		case '1' : {
			strcpy(ket,"Program Menghitung luas persegi");
			printf("\nSisi Persegi : ", sisi); scanf("%i", &sisi);
			printf("\nRumus Luas persegi = sisi x sisi");
			printf("\n%i * %i", sisi,sisi);
			luas=sisi*sisi;
			printf("\nMaka Luas Persegi : %i", luas);
			return main();
		}
		case '2' : {
			strcpy(ket,"Program Menghitung luas Lingkaran");
			printf("\nJari Lingkaran : ", jari); scanf("%i", &jari);
			printf("\nRumus Luas Lingkaran = 3.14 x jari x jari");
			printf("\n%i * %i", jari,jari);
			luas=3.14*jari*jari;
			printf("\nMaka Luas Lingkaran : %i", luas);
			return main();
		}
		case '3' : {
			strcpy(ket,"Program Menghitung luas Segitiga");
			printf("\nAlas Segitiga : ", alas); scanf("%i", &alas);
			printf("\nTinggi Segitiga : ", tinggi); scanf("%i", &tinggi);
			printf("\nRumus Luas Segitiga = a x t / 2");
			printf("\n%i * %i", alas,tinggi);
			luas=alas*tinggi/2;
			printf("\nMaka Luas Segitiga : %i", luas);
			return main();
		}
		case '4' : {
			strcpy(ket,"Keluar");
			break;
		}
	}
	
}
