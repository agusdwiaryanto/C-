/* Program menghitung SPP mahasiswa menggunakan struktur, diketahui :
a. D3
	- spp tetap Rp500.000
	- spp var Rp25.000/sks
b. S1
	- spp tetap Rp750.000
	- spp var Rp50.000/sks
*/

#include<iostream>
#include<conio.h>
using namespace std;
struct mhs{
	char nama[20], nim[10], jurusan[3];
	int sks, program;
};
struct mhs bayar[2];
main()
{
	int bts, var, tetap;
	for(int i=0;i<2;i++)
	{
		//input data
		cout<<"\nNama mhs = "; cin>>bayar[i].nama;
		cout<<"NIM = "; cin>>bayar[i].nim;
		cout<<"Jurusan[TI, MI, SI] = "; cin>>bayar[i].jurusan;
		input:
			cout<<"Program[1=D3, 2=S1] = "; cin>>bayar[i].program;
		if(bayar[i].program<0||bayar[i].program>2)
			{
			cout<<"Program tidak sesuai\n";
			goto input;
			}
		cout<<"Jumlah sks = "; cin>>bayar[i].sks;
		if(bayar[i].program==1)
			{
			tetap=500000;
			var=bayar[i].sks*25000;
			}
		else if(bayar[i].program==2)
			{
			tetap=750000;
			var=bayar[i].sks*50000;
			}
		cout<<"";
		//output data
		cout<<"\n\n--------------------------\n";
		cout<<"      Output      ";
		cout<<"\n--------------------------\n";
		cout<<"\nNama mhs = "<<bayar[i].nama;
		cout<<"\nNIM = "<<bayar[i].nim;
		cout<<"\nJurusan = "<<bayar[i].jurusan;
		cout<<"\nProgram = "<<bayar[i].program;
		cout<<"\nJumlah sks = "<<bayar[i].sks;
		cout<<"\nSpp tetap = "<<tetap;
		cout<<"\nSpp variabel ="<<var;
		cout<<endl<<endl;
	}
	getch();
}
