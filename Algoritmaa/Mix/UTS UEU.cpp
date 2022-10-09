#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	if(a>b+c || b<c) {
		if(a-b>=0 && a-c<0) printf("ESA");
		else printf("UNGGUL");
	}
	else {
		if(a+b>3 && b+c>=5) printf("UNGGUL");
		else printf("ESA");
	}
	return 0;
}
