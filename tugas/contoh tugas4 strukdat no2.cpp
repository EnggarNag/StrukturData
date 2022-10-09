// program untuk mencari suatu data dan inputan berupa kalimat, hitung konsonan ,vokal, numerik, dan jumlah kalimat.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char kalimat[100];
	char cari;
	int konsonan, number,vokal, i, ketemu=0, a, b=0, c=0, d=0, x;
	
	cout << "Masukkan kalimat : "<<endl<<endl; cin.getline(kalimat,100);
	x = strlen(kalimat);
	cout<<"Huruf vokal : ";
	for(int a=0;kalimat[a];a++){
		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){
			//toupper berfungsi sebagai konversi huruf Kapital
			cout<<kalimat[a]<< " " ;
			vokal++;		
}
}
	cout<<"\nJumlah Vokal : "<<vokal;
	
	cout<<"\nHuruf Konsonan : ";
	for(int a=0;kalimat[a];a++){
		if(toupper(kalimat[a])=='A'||toupper(kalimat[a])=='I'||toupper(kalimat[a])=='U'||toupper(kalimat[a])=='E'||toupper(kalimat[a])=='O'){
}
		else if (isdigit(kalimat[a])){
}
			else if (isspace(kalimat[a])){
}
				else{
					cout<<kalimat[a]<< "";
					konsonan++;
}
}
	cout<<"\nJumlah konsonan : "<<konsonan;
	
	cout<<"\nNumerik: ";
	for(int a=0;kalimat[a];a++){
		if (isdigit(kalimat[a])){
			cout<<kalimat[a]<< "";
			number++;
}
}
	cout<<"\nJumlah numerik : "<<number;
	
	
	cout <<"\nMasukkan data yang dicari: ";
	cin >> cari;
	
	for(i=0;kalimat[i];i++){
		if(kalimat[i]==cari){
			ketemu=1;
			break;
}
}
		if (ketemu==1){
			printf("\nData ditemukan pada indeks ke [%i]", i);
}
		else{
		printf("\nData tidak ditemukan");
}
	getch();
}
