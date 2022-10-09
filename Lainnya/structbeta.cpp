#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct Biodata { 
	int nim; 
	char nama[20]; 
	};
struct matakuliah {
	char mtkul[20];
	int nilai;
	};	

int main(){
	int i,j,k,n,m;
	system("cls");
	cout<<"Jumlah Mahasiswa = "; cin>>n;
	struct Biodata mhs[n];
	for( int i=0; i<n; i++ )
	{
		cout << "\t"<<endl;
		cout << "Mahasiswa yang ke "<<i+1<<endl;
		cout << "Nim 	 : "; cin >> mhs[i].nim ;
		cout << "Nama  	 : "; cin >> mhs[i].nama;
		cout << " \t"<<endl;
		
		cout<<"Jumlah Matakuliah yang diambil = "; cin>>m;
		struct matakuliah mhs[m];
		for (j=0; j<m; j++){
  			cout<<"Matakuliah yang ke "<<j+1<<endl;
  			cout<<"Nama Matakuliah \t\t:";
 			cin>>mhs[i].mtkul;
  			cout<<"Masukkan Nilai  \t\t:";
  			cin>>mhs[i].nilai;
}
//===============================//		
}
	
	cout <<"--------------------------------------\n"<<endl;
	cout <<"Data Mahasiswa\n"<<endl;
	cout <<mhs[1].nim<<mhs[1].nama<<mhs[1].mtkul[1]<<mhs[1].nilai[1]<<endl;
	
	cout <<"--------------------------------------\n"<<endl;
	getch();
	return 0;
		
}


	

