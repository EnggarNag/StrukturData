#include <iostream>

using namespace std;
int main(void)
{
	char x;
	cout<<"masukan huruf: ";
	cin>>x;
	if (x>='A'&&x<='Z')
	cout<<"Huruf Kapital";
	else
	if (x>='a'&&x<='z')
	cout<<"Bukan huruf kapital";
	return 0;
}

