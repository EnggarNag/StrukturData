#include <iostream>
#include <cstdlib>

using namespace std;

int fibonacci(int n){
	int hasil;
	hasil = (fibonacci(n-1) + fibonacci(n-2));
	return hasil;
}
void input(){
	int n;
	input:
		cout<<"Masukan Nilai n = ";
		cin>>n;
		
		if(n == 0 || n == 1){
			return n;
			
		} else{
			cout<<"Hasil  = "<<fibonacci(n);
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
