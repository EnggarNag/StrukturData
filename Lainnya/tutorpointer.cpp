#include<iostream>
using namespace std;
/*int y = 5; deklarasi variabel y
int *yPtr; deklarasi variabel pointer yPtr
yPtr = &y; /*mengisi variabel pointer yPtr dengan alamat dari
variabel y*/

void fungsi(int*b){
	cout<< "address b "<< b << endl;
	cout<< "nilai b "<< *b << endl; //dereferencing(nyamain alamat var a ke var b)  (b = &a )  ----- reference(nyamain nilai var ke varpointer) ( b = *a)
}

void kuadrat(int*nilaiPtr){
	*nilaiPtr = (*nilaiPtr) * (*nilaiPtr);
}
	
int main(){
	
	int a = 5;
	cout<< "address a "<< &a << endl;
	cout<< "nilai a "<< a << endl;
	
	fungsi(&a); //fungsi dengan input pointer
	kuadrat(&a);
	
	cout<< "nilai a "<< a << endl;
	
	cin.get();
	return 0;
}
