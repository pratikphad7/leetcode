#include<stdio.h>

int fun(int* arr,int n){
	int water=0;

	/*for(int i=0;i<n;i++){
		int temp=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=(arr[j])*(j-i);
			}else{	
				temp=(arr[i])*(j-i);
			}
			if(temp>water){
				water=temp;
			}
		}
	}*/
	return water;
}
void main(){
	int arr[10];
	printf("enter array element\n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}

	int x=fun(arr,10);
	printf("max=%d\n",x);
}
