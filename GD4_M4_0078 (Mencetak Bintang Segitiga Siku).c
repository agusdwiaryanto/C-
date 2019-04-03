/* Progam Mencetak Bintang Segitiga Siku */
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Contoh Loop Bersarang --> Bintang Segitiga Siku \n\n");
	printf("Masukkan tinggi segitiga :"); scanf("%i",&n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("*");
		}
		printf(" \n");
	}

}

