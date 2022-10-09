#include  <iostream.>
#include  <conio.h>
using namespace std;

void Tampil (int &Bil);	// Prototipe Fungsi
int main()  {	
	int Bil = 99;
	int *Bilptr = &Bil;	
		
	cout << "Nilai Bil sebelum pemanggilan " << "fungsi ="  << Bil << "\n";
	Tampil (Bil);	// Pemanggilan Fungsi
	cout << "Nilai Bil sesudah pemanggilan " << "fungsi ="  << Bil << "\n";
	Tampil (Bil);
	cout << "Nilai Bil sesudah pemanggilan " << "fungsi ="  << Bil << "\n";
	getch();
}
void Tampil ( int &Bil )  
{
       Bil++;
}

