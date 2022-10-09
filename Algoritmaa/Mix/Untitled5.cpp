// Enggar Lanang NAG
// 20200801076
//high cohesion and low coupling
//good design
//Data coupling
//functional cohesion

#include<iostream>

using namespace std;
int harga,promobigsale;
int potongan_harga;
int main(){
	cout<<"masukan harga: ";
	cin>>harga;
	cout<<promobigsale(harga,promobigsale);
	
}

int promobigsale(int harga){                              //functional cohesion
   if(harga > 100000){
      potongan_harga=harga * 0.75;
      promobigsale=harga - potongan_harga;
   }
   else{
   	if(harga == 100000){
   		potongan_harga=harga * 0.5;
   		promobigsale=harga - potongan_harga;
	   }
	else{
		potongan_harga=harga * 0.25;
		promobigsale=harga - potongan_harga;
	}
   }
      
}

