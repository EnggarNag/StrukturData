#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int fak(int n){
	if (n==0 || n==1){
		return 1;
}
	else{
		return (n*fak(n-1));
}
}

int permutasi(int n,int r){
 int hasil;
 hasil = fak(n)/fak(n-r);
 return hasil;
}

void input(){
	int n,r;
	input:
 	cout<<"masukan Nilai n = ";
 	cin>>n;
 	cout<<"Masukan Nilai r = ";
 	cin>>r;
 
  if(n < r){
  	cout<<"N Harus Lebih Besar/Sama dengan R \n"<<endl;
        goto input;
   }else{
   	cout<<"Hasil Permutasinya = "<<permutasi(n,r);
    
 }
}
 
int main(int argc, char** argv) {
	cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t>>>20200801076-Enggar Lanang NAG-Algoritma<<<"<<endl<<endl;
    cout<<"\t\t\t\t>>>>>>Program C++ menghitung Permutasi<<<<<<"<<endl;
    cout<<"========================================================================================================================"<<endl;
 	input();
 	return 0;
}
