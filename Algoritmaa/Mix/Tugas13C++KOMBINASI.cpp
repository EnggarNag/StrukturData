#include <iostream>
#include <cstdlib>

using namespace std;
int fak(int n){
	if (n==0 || n==1){
		return 1;
	} else{
		return (n*fak(n-1));
	}
}
int kombinasi(int n,int r){
	int hasil;
	hasil = fak(n)/(fak(r)*fak(n-r));
	return hasil;
}
void input(){
	int n,r;
	input:
		cout<<"Masukan Nilai n = ";
		cin>>n;
		cout<<"Masukan Nilai r = ";
		cin>>r;
		
		if(n < r){
			cout<<"Nilai n Harus Lebih Besar dari r ! \n"<<endl;
			goto input;
		} else{
			cout<<"Hasil Kombinasi = "<<kombinasi(n,r);
		}	
}
int main(int argc,char** argv) {
	cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t>>>20200801076-Enggar Lanang NAG-Algoritma<<<"<<endl<<endl;
    cout<<"\t\t\t\t>>>>>>Program C++ menghitung Kombinasi<<<<<<"<<endl;
    cout<<"========================================================================================================================"<<endl;
    input();
    return 0;
}	
