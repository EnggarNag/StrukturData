#include <iostream.h>
#include <conio.h>
#include <string.h>
int main()
{
    char kata1,kata2,kata3,kata4;
    int hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,x;
    cout<<"\t\t yusufruli.wordpress.com\n";
    cout<<"\t\t =======================\n";
    cout<<"Graf 4 simpul\n";
    cout<<"Simpul Pertama : ";
    cin>>kata1;
    cout<<"Simpul Kedua   : ";
    cin>>kata2;
    cout<<"Simpul Ketiga  : ";
    cin>>kata3;
    cout<<"Simpul Keempat : ";
    cin>>kata4;
 
    cout<<"Sisi-sisnya adalah : ";
    cout<<kata1<<kata2<<",";
    cout<<kata1<<kata3<<",";
    cout<<kata1<<kata4<<",";
    cout<<kata2<<kata3<<",";
    cout<<kata2<<kata4<<",";
    cout<<kata3<<kata4<<endl<<endl; 
 
    cout<<"Jarak "<<kata1<<" ke "<<kata2<<" : ";cin>>hasil1;
    cout<<"Jarak "<<kata1<<" ke "<<kata3<<" : ";cin>>hasil2;
    cout<<"Jarak "<<kata1<<" ke "<<kata4<<" : ";cin>>hasil3;
    cout<<"Jarak "<<kata2<<" ke "<<kata3<<" : ";cin>>hasil4;
    cout<<"Jarak "<<kata2<<" ke "<<kata4<<" : ";cin>>hasil5;
    cout<<"Jarak "<<kata3<<" ke "<<kata4<<" : ";cin>>hasil6;
    cout<<endl<<endl;
 
    cout<<"panjang jarak pada graf totalnya = "<<hasil1+hasil2+hasil3+hasil4+hasil5+hasil6<<endl<<endl;
 
   cout<<"Mau cari alternatif : \n";
   cout<<"1. AD    2.CB  \n";
   cout<<"pilihan = ";;cin>>x;
   if(x==1){
     cout<<"Alternatif ke-1: "<<kata1<<kata2<<kata3<<kata4<<" = "<<hasil1+hasil2+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-2: "<<kata1<<kata2<<kata4<<" = "<<hasil1+hasil2+hasil4<<endl;
    cout<<"Alternatif ke-3: "<<kata1<<kata3<<kata4<<" = "<<hasil1+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-4: "<<kata1<<kata3<<kata2<<kata4<<" = "<<hasil1+hasil2+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-5: "<<kata1<<kata4<<" = "<<hasil1+hasil4<<" ((ini merupakan jalur terpendek)) "<<endl<<endl; }   
else if(x==2){
    cout<<"Alternatif ke-1: "<<kata3<<kata4<<kata1<<kata2<<" = "<<hasil1+hasil2+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-2: "<<kata3<<kata1<<kata2<<" = "<<hasil1+hasil2+hasil3<<endl;
    cout<<"Alternatif ke-3: "<<kata3<<kata4<<kata2<<" = "<<hasil2+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-4: "<<kata3<<kata1<<kata4<<kata2<<" = "<<hasil1+hasil2+hasil3+hasil4<<endl;
    cout<<"Alternatif ke-5: "<<kata3<<kata2<<" = "<<hasil3+hasil2<<" ((ini merupakan jalur terpendek)) "<<endl<<endl; }   
    
    getch();
    return 0;
}
