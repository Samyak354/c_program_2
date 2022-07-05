#include<stdio.h>
#include<conio.h>

int main() {
	
	int i,j,n;
	
	for(i=1; i<=5; ++i) {
		for(j=1; j<=i; ++j) {
			n = i+1-j;
			printf("%d", n);
		}
		printf("\n");
	}
	return 0;
}
