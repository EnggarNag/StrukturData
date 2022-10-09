// Enggar Lanang NAG
// 20200801076

//high cohesion and low coupling   //good design

//functional cohesion
//Data coupling


#include<iostream>

using namespace std;
int harga,promobigsale,potongan_harga;


Promobigsale(int harga){                            			 //FUNCTIONAL COHESION
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
int main(){
	cout<<"\t\t\t\t\t\t ENGGAR MARKET"<<endl;
	cout<<"\n\t\t\t PROMO BIG SALE! nikmati potongan harga hingga 75% sekarang juga!!"<<endl;
	cout<<"=============================================================================="<<endl;
	
	cout<<"harga      : ";
	cin>>harga;
	
		if (harga > 100000){
			potongan_harga = 75; 
		}
		else {
			if (harga == 100000){
				potongan_harga = 50;
			}
			else {
				potongan_harga = 25;
			}
		}
	cout<<"\t\t\t selamat anda mendapatkan potongan sebesar "<<potongan_harga<<" %";	
	cout<<"\ntotal harga : "<<Promobigsale(harga);					//DATA COUPLING
	cout<<"\n==============================================================================="<<endl;
	cout<<"\n anda hemat  "<<harga-Promobigsale(harga);
	cout<<"\n\t\t\t\t\t ~Terima kasih~"<<endl;
	return 0;
}




