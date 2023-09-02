#include<stdio.h>
int main(){
	int n,i,pos,e,a[10];
	printf("enter the size of array:");
	scanf("%d", &n);
	printf("enter the elements in an array:");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("enter the element to be deleted");
	scanf("%d", &e);
	printf("enter the position to be deleted");
	scanf("%d", &pos);
	for(i=pos;i<n-1;i++){
		a[i] = a[i+1];
	}
	printf("%d is deleted from the array",e);
	return 0;
}