/* Progam Mencari Data Terbesar Terkecil */
#include<stdio.h>
main()
{
	int n,i,max,min,bil;
	printf("Progam mencari data terbesar dan terkecil \n\n");
	printf("Masukkan banyaknya data ="); scanf("%d",&n);
	printf("Masukkan bilangan ke-1 : "); scanf("%d",&bil);
	max=bil;
	min=bil;
	for(i=2;i<=n;i++)
	{
		printf("Masukkan bilangan ke-%d : ",i);
		scanf("%d",&bil);
		if(bil>max)
		max=bil;
		if(bil<min)
		min=bil;
	}
	printf("\n");
	printf("Data terbesar %d \n",max);
	printf("Data terbesar %d \n",min);		
}
