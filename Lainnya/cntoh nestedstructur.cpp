#include <iostream>
 
using namespace std;
 
main(){
    int a;
    cout<<endl<<"TOSERBA 'Cak John'"<<endl;
    cout<<"Jumlah Order : ";cin>>a; //input jumlah order untuk Struct Array order
   
    struct produk{ //membuat struct produk
        int id; //elemen id dari struct produk
        string nama; //elemen nama dari struct produk
        int jml; //elemen jml dari struct produk
        int harga; //elemen harga dari struct produk
    };
   
    struct order{ //membuat struct order
        int idorder; //elemen id dari struct order
        string pelanggan; //elemen pelanggan dari struct order
        struct produk prod; //elemen struct produk dengan nama objek prod dari struct order
    };
    struct order orders[a]; //memberi nama object orders untuk struct order dengan tipe array
 
   
    cout<<"[Input Order]"<<endl;
    for(int i=0;i<a;i++){ //perulangan untuk membuat fungsi input data ke struct orders
        cout<<"ID Order : ";cin>>orders[i].idorder; //memanggil elemen idorder dari struct orders
        cout<<"Nama Pelanggan : ";cin>>orders[i].pelanggan;
        cout<<"ID Produk :";cin>>orders[i].prod.id;
        cout<<"Nama Produk : ";cin>>orders[i].prod.nama; //memanggil elemen nama dari struct prod yang berada di dalam struct orders
        cout<<"Jumlah Produk : ";cin>>orders[i].prod.jml;
        cout<<"Harga Produk : ";cin>>orders[i].prod.harga;
        cout<<endl;
    }
    cout<<"[Output Order]"<<endl;
    for(int i=0;i<a;i++){ //perulangan untuk menampilan data dari struct orders
        cout<<"ID Order : "<<orders[i].idorder<<endl; //memanggil elemen idorder dari struct orders
        cout<<"Nama Pelanggan : "<<orders[i].pelanggan<<endl;
        cout<<"ID Produk :"<<orders[i].prod.id<<endl;
        cout<<"Nama Produk : "<<orders[i].prod.nama<<endl; //memanggil elemen nama dari struct prod yang berada di dalam struct orders
        cout<<"Jumlah Produk : "<<orders[i].prod.jml<<endl;
        cout<<"Harga Produk : "<<orders[i].prod.harga<<endl;
        cout<<endl;
    }
}
