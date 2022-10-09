//Enggar Lanang Nandhito Agil Ghibran
//20200801076
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//deklarasi circular single linked list
struct buku{
	int no, harga;
	string judul;
	buku *next;
}*head,*tail,*curr,*newnode; //inisialisasi circular single linked list


void buatSLLC_awal(int no,string judul,int harga);
void buatSLCC_selanjutnya(int no,string judul,int harga);
void tambahdatabelakang();
void cetak();
void edit_data();

int main(){
	
	buatSLLC_awal(101,"C++",5000);
	buatSLCC_selanjutnya(102,"java",1000);
	buatSLCC_selanjutnya(103,"PHP",6000);
	//cetak(); 
	
	int menu;
	menu_utama:
	cout << "\n\n\n" <<endl;
	cout << "--------------------MENU---------------------" << endl;
	cout << "---------------------------------------------" << endl;
	cout <<
		"1. Tambah Data (belakang)\n" <<		
		"2. Cetak data  \n" <<
		"3. Edit data(harga)\n" <<
		"4. Exit" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Pilih menu : "; cin >> menu;
	cout << "---------------------------------------------" << endl;
	switch (menu)
	{
	case 1:
		tambahdatabelakang();
		goto menu_utama;
		break;
	case 2:
		cetak();
		goto menu_utama;
		break;
	case 3:
		edit_data();
		goto menu_utama;
		break;
	case 4:
		cout << "Keluar......" << endl;
		break;
	default:
		cout << "Menu tidak ada! Silahkan pilih menu yang ada!" << endl;
		goto menu_utama;
		break;
	}
	cin.get();
	return 0;

	
}

//buat single linked list Circular awal
void buatSLLC_awal (int no,string judul,int harga){
	head = new buku();
	head->no = no;
	head->judul = judul;
	head->harga = harga;
	tail = head;
	tail->next = head;
}

//data SLCC selanjutnya
void buatSLCC_selanjutnya (int no,string judul,int harga){
	newnode = new buku();
	newnode->no = no;
	newnode->judul = judul;
	newnode->harga = harga;
	newnode->next = head;
	tail->next = newnode;
	tail=newnode; 
}
//tambah data buku di paling belakang
void tambahdatabelakang (){
	newnode = new buku();
    cout << "Masukan no buku : " ; cin >> newnode->no ;
    cout << "Masukan Judul   : " ; cin >> newnode->judul ;
	cout << "Masukan Harga   : " ; cin >> newnode->harga ;
    newnode->next = head;
    tail->next = newnode;
    tail=newnode;
    cetak();
}
//edit harga dengan mencari nomor buku
void edit_data(){
	Search:
	int cari;
	cout<<"Masukan No buku yang akan diedit harganya : " ; cin >>cari;
	curr = head;
	do {
		if (cari==curr->no){
			cout << "Data ditemukan" << endl;
			cout << "No : " << curr->no << endl;
   			cout << "Judul : " << curr->judul << endl;
   			cout << "Harga : " << curr->harga << endl;
   			cout << "----------------------------------"<<endl;
   			cout << "Masukan Harga Baru : "; cin>> curr->harga;
   			cetak();
   			return;
		}
		curr=curr->next;
	}
	while(curr != head);
}

//cetak data
void cetak (){
	curr = head;
	cout << " Data Buku " << endl;
	cout << "------------------------------------------------" <<endl;
	cout << "| No buku\t| Judul\t\t| Harga\t\t|" <<endl;
	cout << "------------------------------------------------" <<endl;
	while(curr->next != head){
		cout << "| " << curr->no << "\t\t| " << curr->judul << "\t\t| " << curr->harga << "\t\t| " << endl;
		curr  = curr->next;
	}
	cout << "| " << curr->no << "\t\t| " << curr->judul << "\t\t| " << curr->harga << "\t\t| " << endl;
}
