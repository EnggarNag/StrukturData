#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;
struct Tanggal{ 
	int tgl;
	int bln;
	int th; 
	};
struct KTP{
	char noID[5];
	char nama[30];
	char jenis_kelamin; //’L’ atau ‘P’
	Tanggal date;
	};
struct data{
	KTP ktp;
	int jml;
	};

data WNI;
data *WNIptr = &WNI;

void tambah_data(data WNI){ //menambah data
	int n,i,pilihan,pilih;
	data *WNIptr = &WNI;
    cout<<"Jumlah data = ";cin>>WNIptr->jml; //masukkan data KTP
    cin.ignore();
    for( int i=0; i<WNIptr->jml; i++ ){
		cout << "\t"<<endl;
		cout << "No Id 	     	: "; cin>>WNIptr[i].ktp.noID ;
		cout << "Nama  	     	: "; cin>>WNIptr[i].ktp.nama ;
		cout << "Tanggal Lahir 	:"<<endl; 
		cout << "Tanggal 		: "; cin>>WNIptr[i].ktp.date.tgl ;
		cout << "Bulan 			: "; cin>>WNIptr[i].ktp.date.bln ;
		cout << "Tahun 			: "; cin>>WNIptr[i].ktp.date.th ;
		cout << "Jenis Kelamin  : "; cin>>WNIptr[i].ktp.jenis_kelamin;
    }
    cout <<"--------------------------------------\n"<<endl;
    cout << "ID : "<<WNIptr[i].ktp.noID<<endl;
	cout << "Nama :"<<WNIptr[i].ktp.nama<<endl;
	cout << "Tanggal Lahir 	:"<< WNIptr[i].ktp.date.tgl << "-" << WNIptr[i].ktp.date.bln << "-" << WNIptr[i].ktp.date.th<<endl;
	cout << "Jenis Kelamin :"<<WNIptr[i].ktp.jenis_kelamin<<endl;
}

void cari_data(data *WNIptr){ //Mencari data berdasarkan tahun kelahiran tertentu
	int tahun,i;
	cout<<" Masukan Tahun Kelahiran : "; cin>>tahun;
    cout<<endl;
    	if(tahun==WNIptr[i].ktp.date.th){
        	cout<<" Data di temukan pada registrasi ktp ke-"<<i<<endl<<endl;
        	cout<<" ID         : "<<WNIptr[i].ktp.noID<<endl;
        	cout<<" Nama       : "<<WNIptr[i].ktp.nama<<endl;
            cout<< "Jenis Kelamin :"<<WNIptr[i].ktp.jenis_kelamin<<endl;
            cout<<" Tanggal Lahir :"<<WNIptr[i].ktp.date.tgl << "-" << WNIptr[i].ktp.date.bln << "-" << WNIptr[i].ktp.date.th<<endl;}
	}
	

void data_jeniskelamin(data *WNIptr){ //Menampilkan data berdasarkan L dan P
	char jenis;
	int i;
	jenis = WNIptr[i].ktp.jenis_kelamin;
	cout<<"\n MENAMPILKAN DATA WNI (KTP)\n";
    cout<<"Masukan jenis kelamin: ";cin>>jenis;
        if(jenis=='P'){
        	cout<<" ID         : "<<WNIptr[i].ktp.noID<<endl;
        	cout<<" Nama       : "<<WNIptr[i].ktp.nama<<endl;
            cout<< "Jenis Kelamin :"<<WNIptr[i].ktp.jenis_kelamin<<endl;
            cout<<" Tanggal Lahir :"<<WNIptr[i].ktp.date.tgl << "-" << WNIptr[i].ktp.date.bln << "-" << WNIptr[i].ktp.date.th<<endl;}
		
        else if(jenis=='L'){
        	cout<<" ID         : "<<WNIptr[i].ktp.noID<<endl;
        	cout<<" Nama       : "<<WNIptr[i].ktp.nama<<endl;
            cout<< "Jenis Kelamin :"<<WNIptr[i].ktp.jenis_kelamin<<endl;
            cout<<" Tanggal Lahir :"<<WNIptr[i].ktp.date.tgl << "-" << WNIptr[i].ktp.date.bln << "-" << WNIptr[i].ktp.date.th<<endl;}
		            
            else {
            	cout<<" Jenis kelamin tidak ditemukan"<<endl;}
        getch();  
}
	
void edit_data(data *WNIptr){ //Mengedit data
	int n,i;
    cout<<" Data yang akan diedit adalah data ke = ";cin>>n;
	cout<<endl; 
    for( int i=0; i<n; i++ ){
    	cout << "\t"<<endl;
		cout << "No Id 	     	: "; cin>>WNIptr[i].ktp.noID ;
		cout << "Nama  	     	: "; cin>>WNIptr[i].ktp.nama ;
		cout << "Tanggal Lahir 	:"<<endl; 
		cout << "Tanggal 		: "; cin>>WNIptr[i].ktp.date.tgl ;
		cout << "Bulan 			: "; cin>>WNIptr[i].ktp.date.bln ;
		cout << "Tahun 			: "; cin>>WNIptr[i].ktp.date.th ;
		cout << "Jenis Kelamin  : "; cin>>WNIptr[i].ktp.jenis_kelamin;
	}
}			

int main(){
	data WNI;
	data *WNIptr = &WNI;
	int opsi,pilih;
	menu :
	system("cls");
	cout << "\t\t\t\t~~~~~~~~~~~~ Program Data KTP ~~~~~~~~~~~~  \n";
    cout << "=========================================================================="<<endl;
    cout << "Pilih Program : \n";
    cout << "[1] Menambah data \n";
    cout << "[2] Mencari data berdasarkan tahun kelahiran tertentu \n";
    cout << "[3] Menampilkan data berdasarkan L dan P \n";
    cout << "[4] Mengedit data \n\n";
    cout << "Silahkan pilih program : ";cin >> opsi;
	if (opsi > 4 || opsi < 1){
        cout << "\nopsi yang anda pilih tidak ditemukan \nSilahkan masukkan ulang kode operasi .";
        system("pause");
        system("cls");
        goto menu; }
    else {       
        if (opsi == 1){
        	tambah_data(WNI);
			}
        else if (opsi == 2){
			cari_data(&WNI);
			}
        else if (opsi == 3){
        	data_jeniskelamin(&WNI); 
			}
        else if (opsi == 4){
        	edit_data(&WNI); 
			}
    }
    
    cout<<"======================================================================================================================="<<endl;
    cout<<"[1] untuk kembali memilih program"<<endl;
    cout<<"[2] untuk keluar program"<<endl;
    cout<<"======================================================================================================================="<<endl;
    cout<<"Pilih : "; cin>>pilih;
    if (pilih==1)
    {
        goto menu;
    }
    if (pilih==2)
    {
        system("cls");
    	cout<<"\t\t\t\t\n"<<endl;
    	cout<<"\t\t\t\t=============================="<<endl;
    	cout<<"\t\t\t\t>>Terima Kasih<<"<<endl;
    }
    system("cls");
	return 0;
}



