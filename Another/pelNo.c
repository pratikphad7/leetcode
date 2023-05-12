#include<stdio.h>
#include<stdbool.h>
//121
bool pelNo(int x){
	int temp=x;
	int n=0;
	while(temp!=0){
		int rem=temp%10;
		n=n*10+rem;
		temp=temp/10;
	}

	if(n==x){
		return true;
	}

	return false;
}

void main(){
	printf("Enter no\n");
	int n;
	scanf("%d",&n);

	bool x=pelNo(n);

}
