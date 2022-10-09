//GAGAL



#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
//deklarasi circular single linked list
typedef struct buku {
	int no,harga;
	string judul;
	buku *next;
}*head, *tail, *current, *newData, *node;
//inisialisasi circular single linked list
 

void buat_data (){//buat circular single linked list

	//node1 = (buku*) malloc(sizeof(buku));  //cara1 klasik/prosedural
	head = (buku*) malloc(sizeof(buku));						//cara2(PBO)
	node = (buku*) malloc(sizeof(buku));
	tail = (buku*) malloc(sizeof(buku));
	//pengisian node 1
	head->no = 101;
	head->judul= "C++";
	head->harga = 5000;
	head->next = node;
	//pengisian node 2
	node->no = 102;
	node->judul = "Java";
	node->harga = 1000;
	node->next = tail;
	//pengisian node 3
	tail->no = 103;
	tail->judul = "PHP";
	tail->harga = 6000;
	tail->next = head;
	
}

void cetak (){
	cout << "Data Buku" << endl;
	cout << "| No\t\t| Judul\t\t | Harga\t\t|" <<endl;
	buku *current;
	current = head;
	while (current->next !=head){
		cout << "| " << current->no << "\t\t| " << current->judul << "\t\t| " << current->harga << "\t\t| " << endl;
		current = current->next;
	}
	cout << "| " << current->no << "\t\t| " << current->judul << "\t\t| " << current->harga << "\t\t| " << endl;
	
} 


int main(){
	 
	buat_data();
	cetak();
	
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
	cout << "Pilih menu : "; cin >> menu;
	cout << "---------------------------------------------" << endl;
	switch (menu)
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

