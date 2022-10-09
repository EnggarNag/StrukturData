#include <iostream>
#include <conio.h>

using namespace std;
int n, r, perm, comb;
void input(int n, int r){
cout<<"Input nilai dari n : ";cin>>n;
cout<<"Input nilai dari r : ";cin>>r;
}

int faktorial(int n){
if (n==0 || n==1){
return 1;
}
else{
return (n*faktorial(n-1));
}
}

void permutasi(int n, int r, int perm){
perm = faktorial(n)/faktorial(n-r);
}

void kombinasi(int n, int r, int comb){
comb = faktorial(n)/(faktorial(r)*faktorial(n-r));
}

void proses(int n, int r, int perm, int comb){
permutasi(n,r,perm);
kombinasi(n,r,comb);
}

void output(int perm, int comb, int n, int r){
cout<<"Hasil permutasinya adalah : "<<endl<<"P("<<n<<","<<r<<") = "<<perm<<endl;
cout<<"Hasil kombinasinya adalah : "<<endl<<"C("<<n<<","<<r<<") = "<<comb<<endl;
}
int main(){
int input_n, input_r, p, k;
input(input_n, input_r);
while (input_n < input_r){
cout<<"Tidak dapat diproses, masukkan nilai n lebih besar dari r!"<<endl;
input(input_n, input_r);
}
proses(input_n, input_r, p, k);
output(p, k, input_n, input_r);
getch();
}

