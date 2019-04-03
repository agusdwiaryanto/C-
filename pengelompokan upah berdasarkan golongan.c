/* Progam pengelompokan upah berdasarkan golongan */
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char nama[15],ket[30],kode;
	printf("Masukkan nama karyawan:");
	scanf("%s",&nama);
	printf("Pilih kode golongan [A/B/C/D] : ");
	kode=getche();
	switch (kode)
{
case 'A' : {
	strcpy(ket,"Rp. 5000");
	break;
	}
case 'B' : {
	strcpy(ket,"Rp. 7000");
	break;
	}
case 'C' : {
	strcpy(ket,"Rp. 8000");
	break;
	}
case 'D' : {
	strcpy(ket,"Rp. 10000");
	break;
	}

}
printf("\n \n");
printf("Nama karyawan : %s \n",nama);
printf("Kode golongan : %c \n",kode);
printf("Upah : %s\n",ket);
getch();
}
	
