//program data stok
#include <iostream>
#include <conio.h>

using namespace std;
struct stok {
	char nama[50];
	int jml;
}stoks;

main()
{
	cout<<"Masukan nama barang = "; cin>>stoks.nama;
	cout<<"Masukan jumlah barang = "; cin>>stoks.jml;
	cout<<"";
	cout<<"------------------------\n";
	cout<<"";
	cout<<"Output "<<stoks.nama<<" = ";
	cout<<stoks.jml;
	getch();
}
