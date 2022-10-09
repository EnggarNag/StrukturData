#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct matkul {
	float nilai;
	char matkul[20];
} ;
struct biodata {
	int nim;
	char nama[20];
} ;
struct mahasiswa {
	biodata mhs;
	matkul ambl;
};

int main(){
	int n,m,i,j,k;
	 
	system("cls");
	cout<<"Jumlah Mahasiswa = "; cin>>n;
	mahasiswa datamhs[n];
	for( int i=0; i<n; i++ ){
		cout << "\t"<<endl;
		cout << "Mahasiswa yang ke "<<i+1<<endl;
		cout <<"------------------------------\n"<<endl;
		cout <<"Nim        : "; cin>>datamhs[i].mhs.nim;
		cout <<"Nama       : "; cin>>datamhs[i].mhs.nama;
		cout <<"------------------------------\n"<<endl;
		cout<<"Jumlah Matakuliah yang diambil = "; cin>>m;
		matkul ambl[m];
		for (int j=0; j<m; j++){
				cout << "\t"<<endl;
				cout <<"Matakuliah : "; cin>>datamhs[i].ambl.matkul;
				cout <<"Nilai      : "; cin>>datamhs[i].ambl.nilai;
		
		}
	}
	cout <<"--------------------------------------\n"<<endl;
	cout <<"Data Mahasiswa\n"<<endl;
	for( int i=0; i<n; i++ ){
		cout << "NIM  		: "<<datamhs[i].mhs.nim<< endl;
		cout << "Nama 		: "<<datamhs[i].mhs.nama<< endl;
		for( int j=0; j<m; j++ ){
			cout << "Matakuliah  : "<<datamhs[i].ambl.matkul<<endl;
			cout << "Nilai       : "<<datamhs[i].ambl.nilai<<endl;
		}
		
	}
	cout <<"--------------------------------------\n"<<endl;
	getch();
	return 0;
		
	
}
