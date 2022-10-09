#include <iostream>
#include <conio.h>
using namespace std;
//contoh program operasi array dengan data yang blom di input
int main()
{
	int a[10];
	int total=0;
	cout<<"Data array yang berisi data angka\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Masukan nilai array a["<<i<<"] : ";
		cin>>a[i];
		total+=a[i];
	}
	cout<<"\n\nTotal keseluruhan : "<<total;
	getch();
	return 0;
}
