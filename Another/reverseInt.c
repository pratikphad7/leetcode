#include<stdio.h>
//321
int RevInt(int no){
	int temp=0;
	int n=no;
	while(no!=0){  
		int rem=no%10;
	        temp=temp*10+rem;
		no=no/10;	
	}
	return temp;
}

void main(){
  	printf("Enter No\n");
	int no;
	scanf("%d",&no);

	int n=	RevInt(no);
	printf("no=%d\n",n);
}
