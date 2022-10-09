#include <iostream>
#include <cstdlib>

using namespace std;
int main (int argc, char**argv) {

    float a,b,hasil;
    int operasi,pilih;
    
    cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t>>>20200801076-Enggar Lanang NAG-Algoritma<<<"<<endl<<endl;
    cout<<"\t\t\t\t>>>>>Program C++ menghitung dua bilangan<<<<<"<<endl;

    kalkulator :
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    	
    cout << "\t\t\t\t~~~~~~~~~~~~ KALKULATOR SEDERHANA ~~~~~~~~~~~~  \n";
    cout << "======================================================================================================================="<<endl;
    cout << "Masukkan angka pertama : ";cin >> a;
    cout << "Masukkan angka kedua   : ";cin >> b;
    cout << "======================================================================================================================="<<endl;
    cout << "Pilihan Operasi hitung : \n";
    cout << "[1] Operasi Penjumlahan (+)\n";
    cout << "[2] Operasi Pengurangan (-)\n";
    cout << "[3] Operasi Perkalian (*)\n";
    cout << "[4] Operasi Pembagian (/)\n\n";
    cout << "Silahkan masukkan kode operasi hitung : ";cin >> operasi;
    if (operasi > 4 || operasi < 1){
        cout << "\noperasi hitung yang anda pilih tidak ditemukan \nSilahkan masukkan ulang kode operasi .";
        system("pause");
        system("cls");
        goto kalkulator;
    }
    else {
        
        if (operasi == 1){
        	hasil=a+b;
            cout <<a<<" + "<<b<<" = "<<hasil<<endl;
            cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<hasil<<endl;
        }
        else if (operasi == 2){
        	hasil=a-b;
            cout <<a<<" - "<<b<<" = "<<hasil<<endl;
            cout << "\nHasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<hasil<<endl;
        }
        else if (operasi == 3){
        	hasil=a*b;
            cout <<a<<" * "<<b<<" = "<<hasil<<endl;
            cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<hasil<<endl;
        }
        else if (operasi == 4){
        	hasil=a/b;
            cout <<a<<" / "<<b<<" = "<<hasil<<endl;
            cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<hasil<<endl;
        }
    }
    cout<<"======================================================================================================================="<<endl;
    cout<<"[1] untuk coba lagi"<<endl;
    cout<<"[2] untuk keluar"<<endl;
    cout<<"======================================================================================================================="<<endl;
    cout<<"Pilih : "; cin>>pilih;
    if (pilih==1)
    {
                    goto kalkulator;
    }
    if (pilih==2)
    {
        system("cls");
    cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t================================================="<<endl;
    cout<<"\t\t\t\t>>Terima Kasih Telah Menggunakan Kalkulator Ini<<"<<endl;
    cout<<"\t\t\t\t================================================="<<endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
        system("pause");
    }
    return 0;
}
