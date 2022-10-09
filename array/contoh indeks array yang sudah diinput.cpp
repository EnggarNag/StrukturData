#include <iostream>
#include <conio.h>
using namespace std;
//contoh program operasi array dengan data yang sudah di input
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	char b[10]={'a','b','c','d','e','f','g','h','i','j'};
	
	cout<<"Data array yang berisi angka\n";
	for(int i=0;i<10;i++)
	{
		cout<<"a["<<i<<"] : "<<a[i];
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Data array yang berisi karakter\n";
	for(int i=0;i<10;i++)
	{
		cout<<"b["<<i<<"] : "<<b[i];
		cout<<endl;	
	}
	getch();
	return 0;
}
