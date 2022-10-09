//GAGAL




#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
//deklarasi single lnked list
typedef struct buku {
	int no,harga;
	char judul[50];
	buku *next;
}data,*baru,*awal=NULL,*akhir=NULL,*bantu;

//buku data,*baru,*awal=NULL,*akhir=NULL,*bantu;
//buku *head, *tail, *cur;

void inputdata();
void tambah_data();
void cetak_data();
void edit_data();


int main(){

	
	
	int menu;
	menu_utama:
	cout << "--------------------MENU---------------------" << endl;
	cout <<
		"1. Tambah Data (belakang)\n" <<		
		"2. Cetak data  \n" <<
		"3. Edit data(harga)\n" <<
		"4. Clear Screen\n" <<
		"5. Exit" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Pilih menu : "; cin >> menu_main;
	cout << "---------------------------------------------" << endl;
	switch (menu_main)
	{
	case 1:
		tambah_data();
		goto menu_utama;
		break;
	case 2:
		cetak_data();
		goto menu_utama;
		break;
	case 3:
		edit_data();
		goto menu_utama;
		break;
	case 4:
		system("CLS");
		goto menu_utama;
		break;
	case 5:
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


void buat_data(int no, int harga, char judul){
	//inisialisasi Single linked list
	buku *node1 ,*node2, *node3;
	//node1 = (buku*) malloc(sizeof(buku));  //cara1 klasik/prosedural
	node1 = new buku();						//cara2(PBO)
	node2 = new buku();
	node3 = new buku();
	//pengisian node 1
	node1->no = "101";
	node1->judul = "C++";
	node1->harga = 5000;
	node1->next = node2;
	//pengisian node 2
	node2->no = "102";
	node2->judul = "Java";
	node2->harga = 1000;
	node2->next = node3;
	//pengisian node 3
	node3->no = "103";
	node3->judul = "PHP";
	node3->harga = 6000;
	node3->next = node1;
	
}

void tampil(){
 	if(awal==NULL){
  	cout << "Kosong";
 	}
 	else{
  	bantu=awal;
  		while(bantu!=NULL){
   			cout << "No : " << bantu->no << endl;
   			cout << "Judul : " << bantu->judul << endl;
   			cout << "Harga : " << bantu->harga << endl;
   			bantu=bantu->next;
 		}
 	}
 getch();
}

void tambah_data(){
	buat_baru();
 	if(awal==NULL){
  		awal=baru;
 	}
 	else{ 
  		akhir->next=baru;
 	}
 	akhir=baru;
 	akhir->next=NULL;
 	cout << endl << endl;
 tampil();
}


