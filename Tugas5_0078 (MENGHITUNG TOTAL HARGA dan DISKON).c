/*  PROGRAM MENGHITUNG TOTAL HARGA dan DISKON */
#include <stdio.h>
main(){

int diskon;
float jml_belanja,bayar;
char lagi='Y';
while ((lagi=='Y')||(lagi=='y'))
{
printf("================================\n");
printf("|   PROGRAM PENGHITUNG DISKON  |\n");
printf("--------------------------------\n");
printf(" Jumlah Belanja : Rp"); scanf("%f",&jml_belanja);	
printf("Apakah Anda akan memasukkan data lagi [Y/T]:");
		scanf("%s",&lagi);
		printf("\n");	
}
if(jml_belanja>=100000){
    diskon=10;
     bayar=jml_belanja-(0.1*jml_belanja);
}else{
   diskon=0;
   bayar=jml_belanja;
}
printf("--------------------------------\n");
printf(" Diskon      : %i %      \n",diskon);
printf(" Total Bayar : Rp.%.2f    \n",bayar);
printf("================================\n");
printf("|          TERIMA KASIH        |\n");
printf("================================\n");
getch();
}
