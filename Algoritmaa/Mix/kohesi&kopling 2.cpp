// Enggar Lanang NAG
// 20200801076
// Common Coupling
#include<iostream>

using namespace std;

int y = 9;
int z = 12;
int x = z * y ;

int main(void){
	
	Menentukan_ganjil_genap :
	if ( y%2==0){
		cout<<y<<" Adalah bilangan genap."<<endl;
	}else {
		cout<<y<<" Adalah bilangan ganjil."<<endl;
	}
	
	cout<<"======================================================================================================="<<endl;
	
	mengecek_bilangan_x :
	cout<<x<<" Adalah bilangan ganjil!"<<endl;
	if (x%2==0){
		cout<<"==FALSE=="<<endl;
	}
	else {
		cout<<"==TRUE=="<<endl;
	}
	
	return 0;
}

