#include <iostream>
using namespace std;
int fibonacci(int n) {
  if (n == 1 || n == 2){
    return 1;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
int main() {
  
  int n, i = 0;
  cout<<"\t\t\t\t\n"<<endl;
    cout<<"\t\t\t\t>>>20200801076-Enggar Lanang NAG-Algoritma<<<"<<endl<<endl;
    cout<<"\t\t\t\t>>>>>>Program C++ Bilangan Fibonaccii<<<<<<"<<endl;
    cout<<"========================================================================================================================"<<endl;
  cout << "Masukkan Nilai n: ";
  cin >> n;
  cout << "Hasil bilangan fibonacci: \n";
  for (i = 1; i <= n; i++){
    cout << "fibonacci ke-"<< i <<": " << fibonacci(i) << endl;
    i++;
  }
  return 0;
}
