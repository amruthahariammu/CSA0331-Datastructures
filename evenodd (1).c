#include<stdio.h>
int main(){
	int a[50];
	int n;

	
	printf("enter size of array:");
	scanf("%d", &n);


	printf("enter n");
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
}
	printf("display");
	for(int i=0;i<n;i++){
		
		if(a[i]%2==0){
			printf("\n%d is even", a[i]);
		}else{
			printf("\n%d is odd", a[i]);
		}
	}
	return 0;
}