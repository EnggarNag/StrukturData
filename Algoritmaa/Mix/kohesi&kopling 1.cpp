// Enggar Lanang NAG
// 20200801076
//kohesi komunikasional

#include<iostream>
#include<math.h>
#include<cstdlib>
#include<float.h>

using namespace std;

float A ;
int B, C ;

Penjumlahan(int A){
	A = B + C ;
}
Pengurangan(int A){
	A = B - C ;
}
Perkalian(int A){
	A = B * C ;	
}
Modulus(int A){
	A = B % C ;
}

int main(int argc, char**argv)
{
	cout<<" \t\t\t\tHasil perhitungan antara bilangan satu dengan bilangan lainnya "<<endl;
	cout<<" \t\t\t\t============================================================"<<endl;
	bilangan :
    cout<<"masukan bilangan pertama :  ";
    cin>>B;
    cout<<"masukan bilangan kedua :  ";
    cin>>C;
    
    cout<<"\n hasil penjumlahan dari "<<B<<" dengan "<<C<<" adalah "<<Penjumlahan(A); 
    cout<<"\n hasil pengurangan dari "<<B<<" dengan "<<C<<" adalah "<<Pengurangan(A); 
    cout<<"\n hasil perkalian dari "<<B<<" dengan "<<C<<" adalah "<<Perkalian(A); 
    cout<<"\n modulus/sisa pembagian dari "<<B<<" dengan "<<C<<" adalah "<<Modulus(A); 
    return 0; 
}


