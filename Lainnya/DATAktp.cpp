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
void tambah_data(){
	int n,i,pilihan,pilih;
	data WNI;
	data *WNIptr = &WNI;
    cout<<"Jumlah data = ";cin>>WNIptr->jml; //masukkan data KTP
    cin.ignore();
    for( int i=0; i<WNIptr->jml; i++ ){
		cout << "\t"<<endl;
		cout << "No Id 	     	: "; cin>>WNIptr[i].ktp.noID ;//gets(WNIptr[i]->.ktp.noID   //cin>>WNIptr[i].ktp.noID
		cout << "Nama  	     	: "; cin>>WNIptr[i].ktp.nama ;//gets(WNIptr[i]->.ktp.nama   //cin>>WNIptr[i].ktp.nama
		cout << "Tanggal Lahir 	:"<<endl; 
		cout << "Tanggal 		: "; cin>>WNIptr[i].ktp.date.tgl ;//gets(WNIptr[i]->.ktp.date.tgl   //cin>>WNIptr[i].ktp.date.tgl
		cout << "Bulan 			: "; cin>>WNIptr[i].ktp.date.bln ;//gets(WNIptr[i]->.ktp.date.bln   //cin>>WNIptr[i].ktp.date.bln
		cout << "Tahun 			: "; cin>>WNIptr[i].ktp.date.th ;//gets(WNIptr[i]->.ktp.date.th   //cin>>WNIptr[i].ktp.date.th
		Jenis :
		cout << "Jenis Kelamin  : "; cin>>WNIptr[i].ktp.jenis_kelamin;
		
    }
    cout <<"--------------------------------------\n"<<endl;
    cout << "ID : "<<WNIptr[n].ktp.noID<<endl;
	cout << "Nama :"<<WNIptr[n].ktp.nama<<endl;
	cout << "Tanggal Lahir 	:"<< WNIptr[n].ktp.date.tgl << "-" << WNIptr[n].ktp.date.bln << "-" << WNIptr[n].ktp.date.th<<endl;
	cout << "Jenis Kelamin :"<<WNIptr[n].ktp.jenis_kelamin<<endl;
}


void cari_data();
void tampil_data();
void edit_data();

int main(){

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
        cout << "\nopsi yang anda pilih tidak ditemukan \nSilahkan masukkan ulang kode opsi .";
        system("pause");
        system("cls");
        goto menu;
    }
    else {
        
        if (opsi == 1){
        	tambah_data();
        }
        else if (opsi == 2){
        	cari_data();
        }
        else if (opsi == 3){
        	tampil_data();
        }
        else if (opsi == 4){
        	edit_data ();
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
	getch();
	return 0;
}


