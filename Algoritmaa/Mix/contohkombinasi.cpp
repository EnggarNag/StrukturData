#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int fak(int n){
 int hasil=1;
 for(int i=1; i<=n; i ++)
return hasil;
}

int kombinasi(int n,int r){
 int hasil;
 hasil = fak(n)/(fak(r)*fak(n-r));
 return hasil;
}

void input(){
 int n,r;
 cout<<"masukan Nilai n = ";
 cin>>n;
 cout<<"Masukan Nilai r = ";
 cin>>r;
 
  if(n<r){
	return 0;
  }else{
    cout<<"Hasil Kombinasi = "<<kombinasi(n,r);
  }
 }


int main(int argc, char** argv) {
 input();
 return 0;
}
