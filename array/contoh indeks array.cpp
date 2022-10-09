#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	int b[5];
	for(a=0;a<5;a++)
	{
		cout<<"Masukan angka indeks ke ["<<a<<"] = ";
		cin>>b[a];
	}
	for(a=0;a<5;a++)
	{
		cout<<"\nTampilkan angka ke "<<a+1<<" = ";
		cout<<b[a];

	}
	getch();
	return 0;
	
}
