#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;
struct matakuliah {
	char kodekul[20];
	char mtkul[20];
	float nilai;
	};
struct mahasiswa { 
	matakuliah id[20];
	int nim; 
	char nama[20];
	};
	
int main(){
	int i,j,k,n,m;
	cout<<"Jumlah Mahasiswa = "; cin>>n;
	cout<<"Jumlah Matakuliah yang diambil = "; cin>>m;
	mahasiswa UEU[n];
	cin.ignore();
	for( int i=0; i<n; i++ ){
		cout << "\t"<<endl;
		cout << "Nim 	 : "; cin>>UEU[i].nim ;
		cout << "Nama  	 : "; cin>>UEU[i].nama ;
		cout << "\t"<<endl;

		//cout<<"Jumlah Matakuliah yang diambil = "; cin>>m;
		for (j=0; j<m; j++){ 		
  			cout<<"Nama Matakuliah \t\t:"; cin>>UEU[i].id[j].mtkul ;
 			cout<<"Kode Matakuliah \t\t:"; cin>>UEU[i].id[j].kodekul ;
  			cout<<"Masukkan Nilai  \t\t:"; cin>>UEU[i].id[j].nilai ;
  			cout << "\t"<<endl;
  			cin.ignore();
		}	
//===============================//		
	}
	
	cout <<"--------------------------------------\n"<<endl;
	cout <<"Tabel Data Mahasiswa : \n"<<endl;
	
	cout<<"No"<<" "<<setw(10)<<"NIM"<<" "<<setw(20)<<"Nama"<<setw(20)<<" "<<"Mata Kuliah"<<" "<<setw(15)<<"Kode Kuliah"<<" "<<setw(10)<<"Nilai"<<" "<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	for (i=0; i<n; i++){
		cout<<i+1;
		cout<<right<<setw(7)<<" "<<UEU[i].nim<<setw(7)<<" ";
		cout<<right<<setw(7)<<" "<<UEU[i].nama<<" "<<setw(7)<<" ";
			for (j=0; j<m; j++){
				if (j==0){
				cout<<right<<setw(25)<<UEU[i].id[j].mtkul<<setw(7)<<" ";
				cout<<right<<setw(5)<<UEU[i].id[j].kodekul<<setw(14)<<" ";
				cout<<right<<setw(5)<<UEU[i].id[j].nilai<<setw(5)<<" "<<"\n";
				}
				else{
				cout<<right<<setw(60)<<UEU[i].id[j].mtkul<<right<<setw(10)<<" ";
				cout<<right<<setw(5)<<UEU[i].id[j].kodekul<<right<<setw(10)<<" ";
				cout<<right<<setw(5)<<UEU[i].id[j].nilai<<right<<setw(10)<<" "<<"\n";
				}
			}
	}
	cout <<"----------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"----------------------------------------------------------------------------------------------------------\n"<<endl;
	getch();
	return 0;
		
}


	

