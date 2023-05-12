#include<stdio.h>
//1 2 2 2 2 3 4
//1 2 3 4
int fun(int* arr,int n){
	int arr2[n];
	arr2[0]=arr[0];
	int j=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr2[j]){
			j++;
			arr2[j]=arr[i];
		}
	}

	for(int i=0;i<=j;j++){
		arr[i]=arr2[i];
	}
	int k=(n-j)+1;
	return k;
}

void main(){
	int arr[10];
	printf("Enter array element\n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}

	int k=fun(arr,10);
	printf("k=%d\n",k);
}
