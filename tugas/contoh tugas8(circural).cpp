#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct buku{
	int no, harga;
	string judul;
	buku *next;
}*head,*tail,*cur,*newnode;


void buatSLLC (int no,string judul,int harga){
	head = new buku();
	head->no = no;
	head->judul = judul;
	head->harga = harga;
	tail = head;
	tail->next = head;
}

void tambahdatabelakang (int no,string judul,int harga){
	newnode = new buku();
	newnode->no = no;
	newnode->judul = judul;
	newnode->harga = harga;
	newnode->next = head;
	tail->next = newnode;
	tail=newnode; 
}
void cetak (){
	cur = head;
	cout << " Data Buku " << endl;
	cout << "------------------------------------------------" <<endl;
	cout << "| No buku\t| Judul\t\t| Harga\t\t|" <<endl;
	cout << "------------------------------------------------" <<endl;
	while(cur->next != head){
		cout << "| " << cur->no << "\t\t| " << cur->judul << "\t\t| " << cur->harga << "\t\t| " << endl;
		cur  = cur->next;
	}
	cout << "| " << cur->no << "\t\t| " << cur->judul << "\t\t| " << cur->harga << "\t\t| " << endl;
}

int main(){
	
	buatSLLC(101,"C++",5000);
	tambahdatabelakang(102,"java",1000);
	tambahdatabelakang(103,"PHP",6000);
	cetak(); 
	
}
