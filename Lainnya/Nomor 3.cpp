#include <iostream>
 using namespace std;
 
 struct fullname { 
 string namadepan;
 string nim;
 int tanggal;
 string bulan;
 int tahun;
 char jalan[25];
 	char no[25];
 	string kota;
 	string prov;
 
 };
  	fullname ESGUL[10];
 int main () {
 	int n,i;
  cout<<"Masukan Banyak Mahasiswa = ";
  cin>>n;
      	  cout<<"===========================================\n";
  cout<<"Input Data Mahasiswa :"<<endl;
  for (i=1; i<=n; i++){
  	 cout<<"===========================================\n";
  cout<<"mahasiswa ESGUL ke "<<i<<endl;
  cout<<"Nama depan \t\t:";
  cin>>ESGUL[i].namadepan;
  cout<<"Masukkan nim \t\t:";
  cin>>ESGUL[i].nim;
  cout<<"Masukkan Tanggal lahir \t:";
  cin>>ESGUL[i].tanggal;
  cout<<"Masukkan Bulan lahir \t:";
  cin>>ESGUL[i].bulan;
  cout<<"Masukkan Tahun lahir \t:";
  cin>>ESGUL[i].tahun;
  cout<<"Alamat \n";
  cout<<"Nama Jalan \t\t:";
  cin>>ESGUL[i].jalan;
  cout<<"No Rumah \t\t:";
  cin>>ESGUL[i].no;
  cout<<"Kota/Kabupaten \t\t:";
  cin>>ESGUL[i].kota;
  cout<<"Provinsi \t\t:";
  cin>>ESGUL[i].prov;}
  cout<<"===========================================\n";
 for (i=1; i<=n; i++) {
cout<<"\n";
  cout<<"Mahasiswa Universitas Esa Unggul ke "<<i<<endl;
  cout<<"Nama \t\t:"<<ESGUL[i].namadepan<<endl;
  cout<<"Nim \t\t:"<<ESGUL[i].nim<<endl;
  cout<<"Tanggal Lahir \t:"<<ESGUL[i].tanggal<<" "<<ESGUL[i].bulan<<" "<<ESGUL[i].tahun<<endl;
  cout<<"Alamat \t\t:"<<ESGUL[i].jalan<<" "<<ESGUL[i].no<<" "<<ESGUL[i].kota<<" "<<ESGUL[i].prov<<endl;
}
 return 0;
 }
