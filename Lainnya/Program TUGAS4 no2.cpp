#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char kalimat[100];
	char cari;
	int konsonan, number,vokal, i, ketemu=0, a, x;
	
	cout << "Masukkan kalimat : "<<endl<<endl; cin.getline(kalimat,100);
	x = strlen(kalimat);
	//menghitung jumlah vokal,konsonan,dan numerik
	for(int i=0;i<x;i++){
		if(toupper(kalimat[i])=='A'||toupper(kalimat[i])=='I'||toupper(kalimat[i])=='U'||toupper(kalimat[i])=='E'||toupper(kalimat[i])=='O'){
			vokal++;}
		else if (isdigit(kalimat[i])){}
			else if (isspace(kalimat[i])){}
				else{
					konsonan++;}
}
    //menentukan huruf vokal
	cout<<"\nHuruf Vokal berjumlah "<<vokal<<" = ";
	for(int a=0;kalimat[a];a++){
		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){
			//toupper berfungsi sebagai konversi huruf Kapital
			cout<<kalimat[a]<< " ," ;		}
}
	//menentukan huruf konsonan
	cout<<"\nHuruf konsonan berjumlah "<<konsonan<<" = ";
	for(int a=0;kalimat[a];a++){
		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){}
			else if (isdigit(kalimat[a])){}
				else if (isspace(kalimat[a])){}
					else{
						cout<<kalimat[a]<< " ,";}
}
	//menentukan bilangan numerik
	cout<<"\nBilangan numerik  = ";
	for(int a=0;kalimat[a];a++){
		if (isdigit(kalimat[a])){
			cout<<kalimat[a]<< " ,";}
}
	//mencari data yang telah diinput
	cout <<"\nMasukkan data yang ingin dicari: ";
	cin >> cari;
	for(a=0;kalimat[a];a++){
		if(kalimat[a]==cari){
			ketemu=1;
			break;}
}
		if (ketemu==1){
			cout<<"\nData berhasil ditemukan"<<endl;}
		else{
			cout<<"\nData tidak berhasil ditemukan"<<endl;}
	getch();
}
					
				
