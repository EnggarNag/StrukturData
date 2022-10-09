#include<iostream>

using namespace std;

int x=0,y;
fungsi_pembalik(int angka){
   if(angka){
      y=angka%10;
      x=x*10+y;
      fungsi_pembalik(angka/10);
   }
   else
      return x;
   return x;
}

int main(){
   int angka;
   cout<<"\t\t\t\t>>>>>Program C++ membalik suatu bilangan<<<<<"<<endl;
   cout<<"masukan angka :  ";
   cin>>angka;
   cout<<angka<<" dibalik menjadi : "<<fungsi_pembalik(angka);
   return 0;
}
