#include <iostream>
#include <conio.h>
using namespace std;
int main(){	
	int n,i,posisi,resi,ketemu;
	int a[8];
	cout<<"\t\t========================================================\n"<<endl;
	cout<<"\tPengecekan status pengiriman menggunakan no Resi pada Jasa Pengiriman Paket \n\n";
	cout<<"\t\t========================================================\n"<<endl;
	cout<<"\t\t\t--------------PAKETin AJAAA------------- \n\n";
	cout<<"Jumlah Paket yang akan dikirim : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\tNo resi Paket : ";
		cin>>a[i];
	}
	cout<<"\n\t\t\t====Selamat Datang di PAKETin AJAAA====\n"<<endl;
	cout<<"Silahkan Cari No resi Paket anda : ";
	cin>>resi;
	ketemu=0;
	i=0;
	while((ketemu == 0)&&(i<n)){
		if(a[i]==resi){
			ketemu=1;
			posisi=i;
		}
		else
		i=i+1;
	}
		if(ketemu==1)
			cout<<"\n\n\nPaket dengan No Resi "<<resi<<" ditemukan pada Pengiriman No "<<posisi+1;	
		else
			cout<<"\n\n\nMohon maaf Paket dengan No Resi "<<resi<<" Tidak ditemukan"<<endl;
	cout<<"\n\n\n\t\t---------Terima Kasih telah menggunakan jasa kami---------"<<endl;
getch();
}
