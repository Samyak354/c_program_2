#include<stdio.h>
int main(){
	int a[99],n,i,j;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter n no of arrays\n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is\n");
	for(j=1;j<=n;j++){
		printf("%d ",a[j]);
	}
	return 0;
}
