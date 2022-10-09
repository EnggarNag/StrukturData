#include <iostream>
#include <conio.h>
using namespace std;
int Tampil (int Bil);	// Prototipe Fungsi
int main()  {	
	int Bil = 99;	
	cout << "Nilai Bil sebelum pemanggilan" << "fungsi ="  << Bil << "\n";
	//Tampil (Bil);	// Pemanggilan Fungsi
	cout << "Nilai Bil sesudah pemanggilan" << "fungsi ="  << Tampil (Bil) << "\n" ;
	getch();
}
int Tampil ( int Bil )  
{
	 cout << "Nilai Bil di dalam fungsi Tampil ="<< Bil <<"\n";
       Bil++;
       return Bil;
}


