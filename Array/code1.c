//problem statement :- given an array of integer nums and an integer target,return indices of the two numbers such that they add up to target.

#include<stdio.h>

void main(){
	printf("Enter target value\n");
	int target;
	scanf("%d",&target);

	printf("Enter Size\n");
	int size;
	scanf("%d",&size);

	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}

	int j=0;
	int sum=0;
	for(int i=1;i<size;i++){
		if(arr[i]<target&&arr[j]<target){
			sum=arr[i]+arr[j];
			if(sum==target){
				printf("(%d,%d)\n",i,j);
			}	
		}
		j++;
	}
}
