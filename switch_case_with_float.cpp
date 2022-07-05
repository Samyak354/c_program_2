#include<stdio.h>
#include<conio.h>

int main() {
	
	int c; 
	float x, y, l, b, h;
	
	printf("1 - To find the area of rectangle \n");
	printf("2 - To find the volume of cuboid");
	printf("\nEnter 1 or 2 based on your needs.");
	scanf("%d", &c);
	
	switch (c) {
		
		case 1: {
			printf("\nEnter the length and breadth of the rectangle --> ");
			scanf("%f %f", &x, &y);
			printf("\nThe area of the rectangle is --> %f", x*y);
			break;
		}
		case 2: {
			printf("\nEnter the length, breadth and height of the cuboid --> ");
			scanf("%f %f %f", &l, &b, &h);
			printf("\nThe area of the rectangle is --> %f", l*b*h);
			break;
		}
		default: {
			printf("\nPLease enter the correct input.");
			break;
		}
	}
	return 0;
}
