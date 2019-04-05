//Program mengakses elemen struktur
//double struct
#include <iostream>
#include <conio.h>
using namespace std;
struct data_tgl {
	int tgl, bln, thn;
};
struct teman
{
	char nama[20];
	char j_kel[1];
	struct data_tgl tgl;
};

struct teman info;
main()
{
	//input data
	cout<<"Masukan nama anda = "; cin>>info.nama;
	cout<<"Jenis kelamin anda = "; cin>>info.j_kel;
	cout<<"Tanggal lahir anda = "; cin>>info.tgl.tgl;
	cout<<"Bulan nama anda = "; cin>>info.tgl.bln;
	cout<<"Tahun nama anda = "; cin>>info.tgl.thn;
	cout<<"";
	cout<<"-------------------------\n";
	cout<<"";
	//output data 
	cout<<"Nama : "<<info.nama;
	cout<<"\nKelamin : "<<info.j_kel;
	cout<<"\nTanggal lahir : "<<info.tgl.tgl<<"-"<<info.tgl.bln<<"-"<<info.tgl.thn;
	getch();
}
