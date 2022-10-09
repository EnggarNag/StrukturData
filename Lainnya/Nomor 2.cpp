#include <iostream>
 using namespace std;
 struct fullname { 
 string namadepan;
 };
 struct mahasiswa { 
  string nim;
 };
 struct ttl{
 	int tanggal;
 	string bulan;
 	int tahun;
 };
 struct alamat{
 	char jalan[25];
 	char no[25];
 	string kota;
 	string prov;
 };
 int main () {
	fullname ueu;
 	mahasiswa UEU; 
 	ttl ttlueu;
 	alamat almt;
  cout<<"Input Data Mahasiswa "<<endl;
  cout<<"===========================================\n";
  cout<<"Nama depan \t\t:";
  cin>>ueu.namadepan;
  cout<<"Masukkan nim \t\t:";
  cin>>UEU.nim;
  cout<<"Masukkan Tanggal lahir \t:";
  cin>>ttlueu.tanggal;
  cout<<"Masukkan Bulan lahir \t:";
  cin>>ttlueu.bulan;
  cout<<"Masukkan Tahun lahir \t:";
  cin>>ttlueu.tahun;
  cout<<"Alamat \n";
  cout<<"Nama Jalan \t\t:";
  cin>>almt.jalan;
  cout<<"No Rumah \t\t:";
  cin>>almt.no;
  cout<<"Kota/Kabupaten \t\t:";
  cin>>almt.kota;
  cout<<"Provinsi \t\t:";
  cin>>almt.prov;
  cout<<"===========================================\n";
  cout<<"\n";
  cout<<"Mahasiswa Universitas Esa Unggul \n";
  cout<<"Nama \t\t:"<<ueu.namadepan<<endl;
  cout<<"Nim \t\t:"<<UEU.nim<<endl;
  cout<<"Tanggal Lahir \t:"<<ttlueu.tanggal<<" "<<ttlueu.bulan<<" "<<ttlueu.tahun<<endl;
  cout<<"Alamat \t\t:"<<almt.jalan<<" "<<almt.no<<" "<<almt.kota<<" "<<almt.prov<<endl;
 return 0;
 }
