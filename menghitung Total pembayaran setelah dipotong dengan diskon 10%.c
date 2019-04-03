/* Contoh Program untuk menghitung Total pembayaran setelah dipotong dengan diskon 10% */
#include "stdio.h"
int main()
{
char kode[10],nama[10];
float jumlah, harga,diskon,harga_diskon;
printf("=======================================\n");
printf("\n Nama Barang : ");
scanf("%s",&nama);
printf("\n Harga : Rp ");
scanf("%f",&harga);
printf("\n Jumlah : ");
scanf("%f",&jumlah);
diskon=0.1*harga;
harga_diskon=harga-diskon;
printf("=======================================\n");
printf(" Nama Barang = %s\n",nama);
printf(" Harga = Rp %.2f\n",harga);
printf(" Diskon = 10\%\n");
printf(" Jumlah = %.0f\n",jumlah);
printf(" Jumlah harga = Rp %.2f\n",harga_diskon*jumlah);
printf("=======================================\n");
getch();
}
