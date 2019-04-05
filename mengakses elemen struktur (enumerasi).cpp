//program mengakses elemen struktur
#include <iostream>
#include <conio.h>
using namespace std;

enum j_kel{pria,wanita}; //enumerisasi
int main()
{

struct siswa
{
	int nis;
	char nama[20];
	j_kel kelamin;
}A;
//input data
A.nis=123;
A.nama=="Yuli";
A.kelamin=wanita;
//output data
cout<<"\nNis : "<<A.nis<<endl; //endl = enter
cout<<"Nama : "<<A.nama;
cout<<"\nKelamin : "<<A.kelamin;
getch();
}
