#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct deskripsi {
	char kodekul[20];
	char Mata_Kuliah[20];
	float Nilai;
};
struct Mahasiswa { 
	deskripsi mkul[20];
	char Nama[30];
	char Nim[30];
	};
	Mahasiswa data [30]; 
int main(){
	int i,j,n;
	cout<<"Masukan banyak mahasiswa : ";
	cin>>n;
	cin.ignore();
	for (i=0; i<n; i++){
		cout<<"Nama   : "; gets (data[i].Nama);
		cout<<"NIM    : "; gets (data[i].Nim);
			for (j=0; j<3; j++){
			cout<<"Mata Kuliah : "; gets(data[i].mkul[j].Mata_Kuliah);
			cout<<"Kode Kuliah : "; gets(data[i].mkul[j].kodekul);
			cout<<"Nilai       : "; cin>>data[i].mkul[j].Nilai;
			cin.ignore();
		}
	}
	cout<<"Tabel :\n";
	cout<<"No"<<" "<<setw(10)<<"Nama"<<" "<<setw(20)<<"NIM"<<setw(20)<<" "<<"Mata Kuliah"<<" "<<setw(15)<<"Kode Kuliah"<<" "<<setw(10)<<"Nilai"<<" "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	for (i=0; i<n; i++){
		cout<<i+1;
		cout<<right<<setw(5)<<" "<<data[i].Nama<<setw(5)<<" ";
		cout<<right<<setw(5)<<" "<<data[i].Nim<<" "<<setw(5)<<" ";
			for (j=0; j<3; j++){
				if (j==0){
				
			cout<<right<<setw(20)<<data[i].mkul[j].Mata_Kuliah<<setw(7)<<" ";
			cout<<right<<setw(5)<<data[i].mkul[j].kodekul<<setw(14)<<" ";
			cout<<right<<setw(5)<<data[i].mkul[j].Nilai<<setw(5)<<" "<<"\n";
		}
				else{
			cout<<right<<setw(60)<<data[i].mkul[j].Mata_Kuliah<<right<<setw(10)<<" ";
			cout<<right<<setw(5)<<data[i].mkul[j].kodekul<<right<<setw(10)<<" ";
			cout<<right<<setw(5)<<data[i].mkul[j].Nilai<<right<<setw(10)<<" "<<"\n";
		}
	}
	}
getch();
return 0;
}
//Author : Yohanes Bagas Ari Widatama
