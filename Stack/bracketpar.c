#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//{ { (){()} [] } }
bool stack(char* arr){
	int n=sizeof(arr)/sizeof(char);
	char arr2[n];
	int j=-1;
	for(int i=0;i<n;i++){  
		if(arr[i]=='{'||arr[i]=='['||arr[i]=='('){
			j++;
			arr2[j]=arr[i];   
		}else{
			if(arr[i]=='}' && arr2[j]=='{'){
				j--;
			}else if(arr[i]==']'&& arr2[j]=='['){
				j--;
			}else if(arr[i]==')'&& arr2[j]=='('){
				j--;
				printf("asas");
			}else if(arr[i]=='}'&&(arr2[j]=='('||arr2[j]=='[')){
				return false;
			}else if(arr[i]==')'&&(arr2[j]=='{'||arr2[j]=='[')){
				return false;
			}else if(arr[i]==']'&&(arr2[j]=='('||arr2[j]=='{')){
				return false;
			} 
		  
		}
	}
	if(j==(-1)){
		return true;
	}else{
		return false;
	}
}

void main(){
	char arr[10];
	int i=0;
	char ch;
	printf("Enter brac\n");
	while((ch=getchar())!='\n'){
		arr[i++]=ch;
	}
	i=0;
	while(arr[i]!='\0'){
		printf("%c  ",arr[i]);
		i++;
	}
	printf("\n");

	bool x=stack(arr);

	if(x==true){
		printf("true\n");
	}else{
		printf("false\n");
	}
}
