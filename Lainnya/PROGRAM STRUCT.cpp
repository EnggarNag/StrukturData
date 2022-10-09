#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct matakuliah {
	char kodekul [20];
	char mtkul[20];
	float nilai;
	};
struct data { 
	int nim; 
	char nama[20];
	};
struct mahasiswa {
	struct data mhs;
	struct matakuliah id;
};	

int main(){
	int i,j,k,n,m;
	
	system("cls");
	cout<<"Jumlah Mahasiswa = "; cin>>n;
	mahasiswa UEU[n];
	for( int i=0; i<n; i++ )
	{
		cout << "\t"<<endl;
		cout << "Nim 	 : "; cin >> UEU[i].mhs.nim ;
		cout << "Nama  	 : "; cin >> UEU[i].mhs.nama;
		cout << " \t"<<endl;
		
		cout<<"Jumlah Matakuliah yang diambil = "; cin>>m;
		struct matakuliah ambl[m];
		for (j=0; j<m; j++){
  		
  			cout<<"Nama Matakuliah \t\t:";
 			cin>>UEU[i].id[j].mtkul ; //gets
  			cout<<"Masukkan Nilai  \t\t:";
  			cin>>UEU[i].id[j].nilai ;
  			cin.ignore();
}
//===============================//		
}
	
	cout <<"--------------------------------------\n"<<endl;
	cout <<"Data Mahasiswa\n"<<endl;
	for( int i=0; i<n; i++ ){
		cout << "NIM  		: "<<UEU[i].mhs.nim<< endl;
		cout << "Nama 		: "<<UEU[i].mhs.nama<< endl;
		
		cout << "Matakuliah : "<<UEU[i].id[j].mtkul<<endl;
		cout << "Nilai      : "<<UEU[i].id[j].nilai<<endl;
		
		
	}
	cout <<"--------------------------------------\n"<<endl;
	getch();
	return 0;
		
}


	

