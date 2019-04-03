/* Mengurutkan Angka Dari Terkecil ke terbesar */
#include<stdio.h>
main()
{
	int A,B,C;
	printf("Masukkan sembarang angka ke Variabel A-B-C \n"); 
	printf("A = "); scanf("%i",&A);
	printf("B = "); scanf("%i",&B);
	printf("C = "); scanf("%i",&C);
	if(A<B&&B<C)
		printf("Hasil pengurutan adalah %i %i %i \n", A,B,C);
	else if(B<C&&C<A)
		printf("Hasil pengurutan adalah %i %i %i \n", B,C,A);
	else if(C<A&&A<B)
		printf("Hasil pengurutan adalah %i %i %i \n", C,A,B);
	else if(B<A&&A<C)
		printf("Hasil pengurutan adalah %i %i %i \n", B,A,C);
	else if(C<B&&B<A)
		printf("Hasil pengurutan adalah %i %i %i \n", C,B,A);
	else if(A<C&&C<B)
		printf("Hasil pengurutan adalah %i %i %i \n", A,C,B);
}
