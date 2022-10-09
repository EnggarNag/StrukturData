#include <iostream>
#include <conio.h>
using namespace std;
int main(){ 
	int A=9;
	int *ptrA = &A;// pointer ptrA menunjuk alamat memori dari variabel A
	
// Menampilkan alamat dan isi suatu variabel
	cout<< " Alamat variabel A cara langsung =  "<< &A << "\n";
	cout<< " Alamat variabel A tidak langsung =  " << ptrA << "\n"; 
	cout<< "Isi dari variabel A cara langsung =  " << A << "\n";
	cout<< "Isi dari variabel A cara langsung = " << *(&A) << "\n";
	cout<< "Isi dari variabel A tidak langsung = " << *ptrA << "\n";
	*ptrA = 99; 
	// Mengubah isi dari variabel A melalui pointer 
	cout << " Isi dari variabel A yang baru =  " << A << "\n";
	getch();
}
