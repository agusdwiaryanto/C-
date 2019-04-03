/* Progam pemilihan kode jurusan */
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char nama[15],ket[30],kode;
	printf("Masukkan nama mahasiswa:");
	scanf("%s",&nama);
	printf("Pilih kode jurusan [A/B] : ");
	kode=getche();
	switch (kode)
{
case 'A' : {
	strcpy(ket,"Jurusan Teknik Informatika");
	break;
	}
case 'B' : {
	strcpy(ket,"Jurusan Teknik Informatika");
	break;
	}
}
printf("\n \n");
printf("Nama mahasiswa : %s \n",nama);
printf("Kode jurusan : %c \n",kode);
printf("Nama Jurusan : %s\n",ket);
getch();
}
	
