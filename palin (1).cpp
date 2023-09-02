#include<stdio.h>
int main(){
int n,j,i,flag=1;
int a[10];
printf("enter the size of the array");
scanf("%d", &n);
printf("enter n");
for(i=0;i<n;i++){
	scanf("%d", &a[i]);
}
for(i=0,j=n-1;i<n/2;i++,j--){
	if(a[i]==a[j]){
		flag=0;
		break;
	}else{
		continue;
	}
}
if(flag==0){
	printf("number is palindrome");
}else{
	printf("number is not palindrome");
}
return 0;
}