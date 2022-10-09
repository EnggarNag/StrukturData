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

//buku *head,*tail,*cur;

void buatSLLC (int no,string judul,int harga){
	head = new buku();
	head->no = no;
	head->judul = judul;
	head->harga = harga;
	head->next = NULL;
	tail = head;
}

void tambahdatabelakang (int no,string judul,int harga){
	newnode = new buku();
	newnode->no = no;
	newnode->judul = judul;
	newnode->harga = harga;
	newnode->next = NULL;
	tail->next = newnode;
	tail=newnode; 
}
void cetak (){
	cur = head;
	cout << "| No buku\t| Judul\t\t| Harga\t\t|" <<endl;
	while(cur != NULL){
		cout << "| " << cur->no << "\t\t| " << cur->judul << "\t\t| " << cur->harga << "\t\t| " << endl;
		cur  = cur->next;
	}
}

int main(){
	
	/*buku *node1,*node2,*node3;
	//node1=(buku*) malloc(sizeof(buku));
	node1= new buku();
	node2= new buku();
	node3= new buku();
	
	node1->no = 101;
	node1->judul = "C++";
	node1->harga =5000;
	node1->next = node2;
	
	node2->no = 102;
	node2->judul = "java";
	node2->harga =1000;
	node2->next = node3;
	
	node3->no = 103;
	node3->judul = "PHP";
	node3->harga =6000;
	node3->next = NULL;
	
	
	buku *cur;
	cur = node1;
	while(cur != NULL){
		cout<<"No buku : "<< cur->no <<endl;
		cout<<"Judul   : "<< cur->judul <<endl;
		cout<<"Harga   : "<< cur->harga <<endl;
		cur  = cur->next;
	}
	*/
	
	buatSLLC(101,"C++",5000);
	tambahdatabelakang(102,"java",1000);
	tambahdatabelakang(103,"PHP",6000);
	cetak(); 
	
	
	
	
}
