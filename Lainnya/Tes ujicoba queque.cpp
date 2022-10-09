//Enggar Lanang Nandhito Agil Ghibran
//20200801076
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//antrian
int MAXantrian = 10, front=0,back = 0,data;
//ruang antrian 
int deretNilai[5];

// cek data full atau tidak
bool isFull(){
	if(back==MAXantrian){
		return true;
	}else{
		return false;
	}
}
bool isEmpty(){
	if(back==0){
		return true;
	}else{
		return false;
	}
}
//membuat data dengan konsep enqueue
void create(int data){	
	if(isFull()){
		cout<<"Antrian penuh!!"<<endl;
	}else{
		//cek apakah data kosong/tidak
		if(isEmpty()){
			//kalo antrian kosong
			deretNilai[0]=data;
			front++;
			back++;
		}else{
			//kalo ga kosong
			deretNilai[back]=data;
			back++;
		}
	}
}
//enqueue/penambahan data belakang
void enqueue(){
	
	if(isFull()){
		cout<<"Antrian penuh!!"<<endl;
	}else{
		//cek apakah data kosong/tidak
		if(isEmpty()){
			//kalo antrian kosong
			cout<< "input nilai : "; cin>> deretNilai[0];
			front++;
			back++;
		}else{
			//kalo ga kosong
			cout<< "input nilai : "; cin>> deretNilai[back];
			back++;
		}
	}
}
//dequeue/penghapusan data depan
void dequeue(){
	if(isEmpty()){
		cout<<"Antrian Kosong!!"<<endl;
	}else{
		for(int i=0; i<back;i++){
			deretNilai[i] = deretNilai[i+1];	
		}
		back--;	
	}
}
//count/menghitung banyak data antrian
int count(){
	if(isEmpty()){
		return 0;
	}else if (isFull()){
		return MAXantrian;
	}else{
		return back;
	}
}
//mencari total nilai
void Total(){
	int total ,a;
	cout<< "Total nilai " << endl;
	for(int i=0;i<back;i++){
		total += deretNilai[i] ;
	}
	cout << "-----------------------------------"<<endl;
	cout << "TOTAL NILAI : "<< total <<endl;
}
//mencari rata-rata nilai
void Mean(){
	int total ,a;
	double rata;
	cout<< "Total nilai " << endl;
	for(int i=0;i<back;i++){
		total += deretNilai[i] ;
	}
	rata = ((double)total) / back;
	cout << "-----------------------------------"<<endl;
	cout << "TOTAL NILAI : "<< total <<endl;
	cout << "RATA-RATA NILAI :"<< rata <<endl;
}
//menampilkan nilai terbesar
void Terbesar(){
	float terkecil,terbesar;
	for (int i=0;i<back;i++){
	     deretNilai[i];
	     if (i==0){
	     	terkecil=deretNilai[i];
	     	terbesar=deretNilai[i];
		 }
		 else if (deretNilai[i] < terkecil){
		 	terkecil=deretNilai[i];
		 }else if (deretNilai[i] > terbesar){
		 	terbesar=deretNilai[i];
		 }else {	
		 }
	}
	cout << "\nNilai Terbesar adalah : "<<terbesar<<endl;
}
//menampilkan nilai terkecil
void Terkecil(){
	float terkecil,terbesar;
	for (int i=0;i<back;i++){
	     deretNilai[i];
	     if (i==0){
	     	terkecil=deretNilai[i];
	     	terbesar=deretNilai[i];
		 }
		 else if (deretNilai[i] < terkecil){
		 	terkecil=deretNilai[i];
		 }else if (deretNilai[i] > terbesar){
		 	terbesar=deretNilai[i];
		 }else {
		 }
	}
	cout << "\nNilai Terkecil adalah : "<<terkecil<<endl;
}
//clear/menghapus data
void clear(){
	if(isEmpty()){
		cout<<"Antrian Kosong!!"<<endl;
	}else{
		for(int i=0;i<MAXantrian;i++){
			if(back>1){
				deretNilai[back-1]=NULL;
				back--;
			}else if(back==1){
				deretNilai[back-1]=NULL;
				back = 0;
				front = 0;
			}
		}
	}
}
//display/print
void print(){
	cout<<"jumlah Antrian Nilai = "<<count()<< " NIlai."<<endl;
	cout<<"Data deret Nilai: "<<endl;
	if( isEmpty()){
		cout << "--------------------------\n"<<endl;
		cout<<"Antrian Kosong!!"<<endl;	
	}else{
		cout << "--------------------------"<<endl;
		cout << " | No. | NIlai\t\t|" <<endl;
		cout << "--------------------------"<<endl;
		for(int i=0;i< MAXantrian; i++){
		//cek apakah ruang kosong/ga
		if(deretNilai[i]!= NULL){
			//klo ruang tidak kosong
			cout << " |  "<< i+1 << "  | " <<deretNilai[i]<<"\t\t|"<<endl;
		}else{
			//klo kosong
			cout << " |  "<< i+1 << "  | (kosong)	| " <<endl;	 
		}
		}
		cout << "--------------------------\n"<<endl;	
	}
}

int main(){
	//data awal
	create(22);
	create(11);
	create(50);
	create(75);
	create(99);
	print();
	//menu utama
	int menu;
	menu_utama:
	cout << "\n\n" <<endl;
	cout << "--------------------MENU---------------------" << endl;
	cout << "---------------------------------------------" << endl;
	cout <<
		"1. Enqueque/Tambah antrian (Belakang))\n" <<		
		"2. Dequeque/Hapus Antrian (Depan)\n" <<
		"3. Clear\n" <<
		"4. Cetak\n" <<
		"5. Hitung Total Nilai\n" <<
		"6. Hitung Rata-rata Nilai\n" <<
		"7. Nilai Terbesar\n" <<
		"8. Nilai Terkecil\n" <<endl;
	cout << "---------------------------------------------" << endl;
	cout << "Pilih menu : "; cin >> menu;
	cout << "---------------------------------------------" << endl;
	switch (menu)
	{
	case 1:
		enqueue();
		print();
		goto menu_utama;
		break;
	case 2:
		dequeue();
		print();
		goto menu_utama;
		break;
	case 3:
		clear();
		print();
		goto menu_utama;
		break;
	case 4:
		print();
		break;
	case 5:
		print();
		Total();
		break;
	case 6:
		print();
		Mean();
		break;
	case 7:
		print();
		Terbesar();
		break;
	case 8:
		print();
		Terkecil();
		break;
	
	default:
		cout << "Menu tidak ada! Silahkan pilih menu yang ada!" << endl;
		goto menu_utama;
		break;
	}
	cin.get();
	return 0;

}
