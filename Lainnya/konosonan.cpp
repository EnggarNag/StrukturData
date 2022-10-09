// Buat program untuk mencari suatu data dan inputan berupa kalimat, hitung konsonan,vokal,numerik.
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int ketemu= 0;
	int konsonan = 0;
	int vokal =0;
	int i=0;
	int x;
	
	//number,vokal, i, ketemu=0, a, b=0, c=0, d=0;
	char kalimat[100];
	char cari;
	cout << "Masukkan kalimat : "<<endl<<endl; cin.getline(kalimat,100);
	x = strlen(kalimat);
	
	for(int i=0;i<x;i++){
		if(kalimat[i]=='A'||kalimat[i]=='I'||kalimat[i]=='U'||kalimat[i]=='E'||kalimat[i]=='O'||kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o'){
			vokal++;
}
		else {
			konsonan++; 
}

}
	cout<<endl;
	cout<<" Jumlah huruf Vokal = "<<vokal<<" = "<<endl;
	cout<<" Jumlah huruf Konsonan = "<<konsonan<<" = "<<endl;

	cout <<"Masukkan data yang dicari: ";
	cin >> cari;
	printf("Data %c ditemukan pada indeks ", cari);
	for(i=0;kalimat[i];i++){
		if(kalimat[i]==cari){
			ketemu=1;
			break;
}
}
	//mencari
		if (ketemu==1){
			printf("ke [%i]", i);
}
		else{
		printf("\nData tidak ditemukan");
}
	getch();

}
	
	

