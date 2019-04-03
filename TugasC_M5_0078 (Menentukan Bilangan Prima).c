/* Progam Menentukan Bilangan Prima */
#include<conio.h>
#include<stdio.h>
int main()
{
	int z,x,c,cek;
	printf("Angka : ");
	scanf("%d",&z);
		for(x=2;x<=z;x++)
	{
		cek=0;
		for(c=2;c<x;c++)
		{
		if(x%c==0)
			{
			cek=1;
			}
		}
		if(cek==0)
		printf("%d\t",x);
	}
}
