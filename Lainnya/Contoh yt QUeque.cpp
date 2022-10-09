#include <iostream>

using namespace std;
//array antrian
int maksantrianarray = 5, front=0,back = 0;
//ruang antrian array
string antrianATM[5];

//isFull / cekdata full atau tidak
bool isFullArray(){
	if(back==maksantrianarray){
		return true;
	}else{
		return false;
	}
}

//isEmpty
bool isEmptyArray(){
	if(back==0){
		return true;
	}else{
		return false;
	}
}

//enqueque/penambahan data
void enqueueArray(string data){
	
	if(isFullArray()){
		cout<<"Antrian penuh!!"<<endl;
	}else{
		//cek apakah data kosong/tidak
		if(isEmptyArray()){
			//kalo antrian kosong
			antrianATM[0]=data;
			front++;
			back++;
		}else{
			//kalo ga kosong
			antrianATM[back]=data;
			back++;
		}
	}
}

//dequeque/penghpausan data dpn

void dequeueArray(){
	if(isEmptyArray()){
		cout<<"Antrian Kosong!!"<<endl;
	}else{
		for(int i=0; i<back;i++){
			antrianATM[i] = antrianATM[i+1];	
		}
		back--;	
	}
}

//countarray/menghitungbanyakdata antrian
int countArray(){
	if(isEmptyArray()){
		return 0;
	}else if (isFullArray()){
		return maksantrianarray;
	}else{
		return back;
	}
}

//clear//destroy

void destroyArray(){
	if(isEmptyArray()){
		cout<<"Antrian Kosong!!"<<endl;
	}else{
		for(int i=0;i<maksantrianarray;i++){
			if(back>1){
				antrianATM[back-1]="";
				back--;
			}else if(back==1){
				antrianATM[back-1]="";
				back = 0;
				front = 0;
			}
		}
	}
}
//display/print
void viewArray(){
	cout<<"jumlah Data Antrian : "<<countArray()<< "data"<<endl;
	cout<<"Data Antrian ATM: "<<endl;
	if( isEmptyArray()){
		cout<<"Antrian Kosong!!"<<endl;	
	}else{
		for(int i=0;i< maksantrianarray; i++){
		//cek apakah ruang kosong/ga
		if(antrianATM[i]!=""){
			//klo ruang tidak kosong
			cout << i+1 << ", " <<antrianATM[i]<<endl;
		}else{
			//klo kosong
			cout << i+1 << ", (kosong)" <<endl;	 
		}
		}	
	}
}

int main(){
	viewArray();
	//tambahdata
	enqueueArray("anjay");
	viewArray();
	
	enqueueArray("nagnag");
	enqueueArray("bambang");
	enqueueArray("oalah");
	viewArray();
	
	dequeueArray();
	viewArray();
	
	destroyArray();
	viewArray();
	
}
