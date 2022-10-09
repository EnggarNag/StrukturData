#include <iostream>
using namespace std;
    
int fibonacci(int m) {
    if (m == 1 || m == 2){
        return 1;
      } else {
        return (fibonacci(m-1) + fibonacci(m-2));
      }
    }
    
int main() {
      
    int n, m= 0;
    cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t>>>20200801076-Enggar Lanang NAG-Algoritma<<<"<<endl<<endl;
    cout<<"\t\t\t\t>>>>>>Program C++ Bilangan Fibonacci<<<<<<"<<endl;
    cout<<"========================================================================================================================"<<endl;
      cout << "Masukan Nilai n :  ";
    cin >> n;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; i++){
        cout << fibonacci(m) <<" ";
        m++;
    }
	return 0;
}
