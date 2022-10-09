#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;
//menyimpan: Infomasi Data Anggota Perpustakaan serta informasi Data Buku-buku yang dipinjam
//Enggar Lanang NAG (20200801076)
struct Databuku {
	char kodebuku[20];
	char buku[20];
	};
struct Anggotaperpus { 
	Databuku perpus[20];
	int nim; 
	char nama[20];
	};
	
int main(){
	int i,j,k,n,m;
	cout<<"Jumlah Anggota = "; cin>>n;
	cout<<"Jumlah Buku = "; cin>>m;
	Anggotaperpus mahasiswa[n];
	cin.ignore();
	for( int i=0; i<n; i++ ){
		cout << "\t"<<endl;
		cout << "Nim 	 : "; cin>>mahasiswa[i].nim ;
		cout << "Nama  	 : "; cin>>mahasiswa[i].nama ;
		cout << "\t"<<endl;
				
		for (j=0; j<m; j++){ 		
  			cout<<"Nama Buku \t\t:"; cin>>mahasiswa[i].perpus[j].buku ;
 			cout<<"Kode Buku \t\t:"; cin>>mahasiswa[i].perpus[j].kodebuku ;
  			cout << "\t"<<endl;
  			cin.ignore();
  }
}
  cout<<"Tabel Data Informasi Perpus:\n";
	cout<<"No"<<" "<<setw(10)<<"Nama"<<" "<<setw(20)<<"NIM"<<setw(20)<<" "<<"Buku"<<" "<<setw(15)<<"Kode Buku"<<" "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	for (i=0; i<n; i++){
		cout<<i+1;
		cout<<right<<setw(5)<<" "<<mahasiswa[i].nama<<setw(5)<<" ";
		cout<<right<<setw(5)<<" "<<mahasiswa[i].nim<<" "<<setw(5)<<" ";
			for (j=0; j<3; j++){
				if (j==0){				
			cout<<right<<setw(20)<<mahasiswa[i].perpus[j].buku<<setw(7)<<" ";
			cout<<right<<setw(5)<<mahasiswa[i].perpus[j].kodebuku<<setw(14)<<" ";
		}
				else{
			cout<<right<<setw(60)<<mahasiswa[i].perpus[j].buku<<right<<setw(10)<<" ";
			cout<<right<<setw(5)<<mahasiswa[i].perpus[j].kodebuku<<right<<setw(10)<<" ";			
		}
	}
	}
getch();
return 0;
}
  
  
