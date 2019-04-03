/* Program memasukan data pegawai&gaji 5x berbentuk menu */

/* Jam kerja >=8 Gaji harian--> (jam kerja+lembur)*10000
jam kerja <8 jam kerja*10000 */

#include<iostream>
#include<conio.h>
#include<cstring>
#include<cstdlib>
using namespace std;
main()
{
	int com;
	int i, n, gaji;
	
struct data {
	int jkerja[10], jlembur[10];
	char nama[20][8];
	int umur[2];
	;
}data;
	
	do
	{
		cout<<" *****Main Menu*****\n 1. Input Data Pegawai \n 2. Output Data Pegawai \n 3. Gaji Harian \n 0. Exit" << endl;
		cout<<"\nMasukan Pilihan : "; cin>>com;
		switch (com)
		{
			case 1 : 
			{
				cout<<"Input Data\n";
				for(i=0;i<5;i++){
				cout<<"Nama : ";cin>>data.nama[i];
				cout<<"Umur : ";cin>>data.umur[i];
				cout<<"Jam Kerja : ";cin>>data.jkerja[i];
				cout<<"Jam Lembur : ";cin>>data.jlembur[i];}
				break;
			}
			case 2 :
			{
				cout<<"Output Data\n";
				for(i=0;i<5;i++){
				cout<<"\nNama : "<<data.nama[i];
				cout<<"\nUmur : "<<data.umur[i];
				cout<<"\nJam Kerja : "<<data.jkerja[i];
				cout<<"\nJam Lembur : "<<data.jlembur[i];
				cout<<"";}
				cout<<"";
				system("pause");
				break;
			}
			case 3 :
			{
				for(i=0;i<5;i++){
					if(data.jkerja[i]<8)
					{
					gaji=data.jkerja[i]*10000;
					}
					else if(data.jkerja[i]>=8)
					{
					gaji=(data.jkerja[i]+data.jlembur[i])*10000;
					}
				cout<<"\nGaji harian yang diterima oleh saudara "<<data.nama[i]<<" "<<"sebesar Rp."<<gaji;	
				}
				system("pause");
				break;
			}
			case 0 :
			{
				break;
			}
		}
		system ("cls");
	}
	while (com!=0);
}


