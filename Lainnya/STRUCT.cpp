#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;
struct Mahasiswa { int Nim ; string Nama; string Mata_Kuliah; float Nilai; };

int main()
{
	struct Mahasiswa M[3]; 
	system("cls");
	for( int i=0; i<3; i++ )
	{
		cout << "Nim 		 : "; cin >> M[i].Nim ;
		cout << "Nama 	 	 : "; cin >> M[i].Nama;
		cout << "Mata Kuliah 	: "; cin >> M[i].Mata_Kuliah;
		cout << "Nilai 		 : "; cin >> M[i].Nilai ;
		cout << " \t"<<endl;
	}
	cout <<"--------------------------------------\n"<<endl;
	cout <<"NO NIM Nama Mahasiswa Mata kuliah Nilai\n"<<endl;
	cout <<"--------------------------------------\n"<<endl;
	for (int i= 0 ; i<3 ; i++)
	{
		cout<<(i+1);
		cout<<"\t"<<M[i].Nim;
		cout<<"\t"<<M[i].Nama;
		cout<<"\t"<<M[i].Mata_Kuliah;
		cout<<"\t"<<M[i].Nilai;
		cout<<"\n"<<endl;
	}
	cout <<"--------------------------------------\n"<<endl;
	getch();
	return 0;
}



