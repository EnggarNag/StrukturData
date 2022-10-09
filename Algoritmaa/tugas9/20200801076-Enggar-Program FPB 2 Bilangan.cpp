#include <iostream>
using namespace std;

int fpb(int x, int y)
{
    if (y <= x && x%y == 0)
       return y;
    
    if (x < y)
        return fpb(y, x);
    return fpb(y, x%y);
}  
int main()
{
    int x,y;
    cout<<"\t\t\t\t>>>>>Program C++ menghitung FPB dari dua bilangan<<<<<"<<endl;
    cout<<"masukan bilangan pertama :  ";
    cin>>x;
    cout<<"masukan bilangan kedua :  ";
    cin>>y;
    
    cout<<"FPB dari "<<x<<" dan "<<y<<" adalah "<<fpb(x, y);
    return 0;
}

