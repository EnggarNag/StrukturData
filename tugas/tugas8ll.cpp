//GAGALLLLL




#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
//deklarasi circular single linked list
struct buku {
	string no,harga,judul;
	buku *next;
};
//inisialisasi circular single linked list
buku *head, *tail, *current, *newData, *node;

bool isEmpty()
{
    if (head==NULL)
        return true;
    return false;
}

void dataawal (string data[3]){
	buku *head;
    head=(buku*) malloc(sizeof (buku));
    head->no = data[0];
    head->judul = data[1];
	head->harga = data[2];
    head->next=newData;
    if (isEmpty())
    {
        head=newData;
        head->next=head;
    }
    else
    {
        buku *current;
        current=head;
        while (current->next!=head)
        {
            current=current->next;
        }
        current->next=newData;
        newData->next=head;
    }
	
}
void tambahDataBelakang ()
{
    buku *newData;
    newData=(buku*) malloc(sizeof (buku));
    cout << "Masukan no buku : " ; cin >> newData->no ;
    cout << "Masukan Judul   : " ; cin >> newData->judul ;
	cout << "Masukan Harga   : " ; cin >> newData->harga ;
    newData->next=newData;
    /*if (isEmpty())
    {
        head=newData;
        head->next=head;
    }
    else
    {
        buku *current;
        current=head;
        while (current->next!=head)
        {
            current=current->next;
        }
        current->next=newData;
        newData->next=head;
    }*/
}



void cetak_data ()
{
	cout << "Data Buku" << endl;
	/*cout << "| No\t\t| Judul\t\t | Harga\t\t|" <<endl;
	buku *current;
	current = head;
	while (current->next !=head){
		cout << "| " << current->no << "\t\t| " << current->judul << "\t\t| " << current->harga << "\t\t| " << endl;
		current = current->next;
	}
	cout << "| " << current->no << "\t\t| " << current->judul << "\t\t| " << current->harga << "\t\t| " << endl;
	*/
	if (!isEmpty())
    {
        buku *current;
        current=head;
        do
        {
            cout << current->no<< " ";
            cout << current->judul<< " ";
            cout << current->harga<< " ";
            current=current->next;
        }
        while (current!=head);
        cout << endl;
    }
}

void edit_data (){
	
}


int main(){
	
	string data1[3]={"101","C++","5000"};
	string data2[3]={"102","java","1000"};
	string data3[3]={"103","PHP","6000"};
	dataawal(data1);
	
	cetak_data();
	
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
		tambahDataBelakang();
		goto menu_utama;
		break;
	case 2:
		cetak_data();
		goto menu_utama;
		break;
	case 3:
		//edit_data();
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

