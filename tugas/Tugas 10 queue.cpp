//Enggar Lanang Nandhito Agil Ghibran
//20200801076
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
#define MAX 0
struct queue{
	int data [MAX];
	int head;
	int tail;
};

queue antrian;


void create(){
	antrian.head=antrian.tail=-1;
}

int isEmpty(){
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(antrian.tail==MAX-1)
		return 1;
	else
		return 0;	
}

void Enqueque(int data){
	if(isEmpty()==1){
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		printf("&d masuk !",antrian.data[antrian.tail]);
	}else
	if(isFull()==0){
		antrian.tail++;
		antrian.data[antrian.tail]=data;
		printf("&d masuk !",antrian.data[antrian.tail]);
	}
}

int Dequeque(){
	int i;
	int e = antrian.data[antrian.head];
	for(i=antrian.head;i<=antrian.tail-1;i++){
		antrian.data[1]=antrian.data[1+1];
	}
	antrian.tail--;
	return e;
}

void Clear(){
	antrian.head=antrian.tail=-1;
	printf("data clear");
}

void Cetak(){
	if(isEmpty()==0){
		for(int i=antrian.head;i<=antrian.tail;i++){
			printf("%d ",antrian.data[i]);
		}
	}else 
	printf ("data kosong !\n");
}


/*void Total
void Terbesar
void Terkecil
void rata-rata*/

int main(){
	
	
	
	int menu;
	menu_utama:
	cout << "\n\n\n" <<endl;
	cout << "--------------------MENU---------------------" << endl;
	cout << "---------------------------------------------" << endl;
	cout <<
		"1. Enqueque/Tambah antrian (Belakang))\n" <<		
		"2. Dequeque/Hapus Antrian (Depan)\n" <<
		"3. Clear\n" <<
		"4. Cetak" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Pilih menu : "; cin >> menu;
	cout << "---------------------------------------------" << endl;
	switch (menu)
	{
	case 1:
		//Enqueque(data);
		goto menu_utama;
		break;
	case 2:
		Dequeque();
		goto menu_utama;
		break;
	case 3:
		Clear();
		goto menu_utama;
		break;
	case 4:
		Cetak();
		break;
	default:
		cout << "Menu tidak ada! Silahkan pilih menu yang ada!" << endl;
		goto menu_utama;
		break;
	}
	cin.get();
	return 0;

	
}




