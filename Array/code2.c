#include<stdio.h>

double median(int* a1,int* a2,int n1,int n2){
	int n3=n1+n2;
	int a3[n3];
	
	int i=0;
	int j=0;
	int k=0;
	while(i<n1&&j<n2){
		if(a1[i]<=a2[j]){
			a3[k]=a1[i];
			i++;
		}else{
			a3[k]=a2[j];
			j++;
		}
		k++;
	}

	if(i<n1){
		while(i<n1){
			a3[k]=a1[i];
			i++;
			k++;
		}
	}else if(j<n2){
		while(j<n2){
			a3[k]=a2[j];
			j++;
			k++;
		}
	}
	double mean=0;
	int x=n3/2;
	if(n3%2==0){
		mean=(a3[x]+a3[x-1]);
		printf("%lf\n",mean);
		mean=mean/2;
		printf("%lf\n",mean);
	}else{
		mean=a3[x];
	}
	return mean;
}

void main(){
	int size1;
	int size2;
	printf("Enter size1 and size2\n");
	scanf("%d %d",&size1,&size2);

	int arr1[size1];
	int arr2[size2];
	
	printf("Enter array1 Element\n");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter array2 Element\n");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	double mean=median(arr1,arr2,size1,size2);
	printf("mean=%lf\n",mean);
}
