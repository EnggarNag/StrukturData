#include <iostream>
#include <conio.h>
using namespace std;
int undian[13]={7,11,14,29,35,40,46,55,58,65,75,78,99};
int binary_search(int cari)
{
	int left,right,mid;
	int n=13;
	left=0;
	right=n-1;
	int ketemu=0;
	while (left<=right && ketemu==0)
	{
		mid=(left+right)/2;
		if(cari==undian[mid])
		ketemu=1;
		else if(cari<undian[mid]){
			right=mid-1;
		}		
			else left=mid+1;
	}
	if(ketemu==1) return 1; else return 0;
}
int main()
{
	int cari, hasil;
	cout<<"\nMenentukan pemenang undian doorprize menggunakan binary search \n\n";
	cout<<"\t===UNDIAN DOORPRIZE CV.Enggar=== \n\n";
	cout<<"Masukan nomor undian : ";
	cin>>cari;
	hasil = binary_search(cari);
	if(hasil==1)
	{
		cout<<"\nSELAMAT ANDA MEMENANGKAN DOORPRIZE!"<<endl;
	}
	else if(hasil==0)
		cout<<"\nAnda kurang beruntung,silahkan coba lagi!"<<endl;
getch();
}
