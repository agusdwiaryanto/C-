/* Progam Mencari Deret Pangkat-2 */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,y,hasil;
	cout<<"Bilangan :";
	cin>>x;
	cout<<"Pangkat berapa :";
	cin>>y;
	hasil=pow(x,y);
	cout<<hasil;
	return 0;
}
