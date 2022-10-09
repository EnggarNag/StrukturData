#include <iostream>
#include <cstdlib>

 
using namespace std;
 int faktorial (int n,int r)
{
    int faktorial;
    if (n<r)
    {
    return 0;
    }
    else
    {
    faktorial(n)/faktorial(r)*faktorial(n-1);
    }
}
int main(int argc, char *argv[])
{
    int n,r, kombinasi;
    cout<<" Program Menghitung Kombinasi"<<endl;
    cout<<" \n Masukkan Nilai n : "; cin>>n;
    cout<<" \n Masukkan Nilai r : "; cin>>r;
    kombinasi=faktorial(n)/(faktorial(r)*faktorial(n-r));
    cout<<" \n Kombinasinya adalah: "<<kombinasi;
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
