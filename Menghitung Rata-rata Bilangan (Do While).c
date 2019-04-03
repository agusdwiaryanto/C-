/* Progam Menghitung Rata-rata Bilangan */
#include<stdio.h>
main()
{
	int n=0;
	float jumlah=0,bil,rata;
	char lagi;
	do
	{
		printf("Masukkan bilangan : ");
		scanf("%f",&bil);
		jumlah=jumlah+bil;
		n=n+1;
		printf("Apakah Anda akan masukkan data lagi [Y/T]: ");
		scanf("%s",&lagi);
		printf("\n");
	}	while ((lagi=='Y')||(lagi=="y"));
	rata=jumlah/n;
	printf("\n");
	printf("Banyaknya bilangan : %i \n",n);
	printf("Rata-rata bilangan : %.2f \n",rata);
}
