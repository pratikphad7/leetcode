#include<stdio.h>
// 25-5  5+3+5+3+5+3  
void ZigZag(char*arr,int row){
    	int i=0;
	int col=0;

	while(arr[i]!='\0'){
    		i++;
	}
	int j=0;
	int flag=0;
	int tmp=0;
	while(j<=i){
		if(flag==0){
			j=j+row;
			col++;
			flag=1;
		}else{
			tmp++;
			if(tmp==(row-2)){
				tmp=0;
				flag=0;
			}
			j++;
			col++;
		}
	}
	printf("col=%d\n",col);

	char temp[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			temp[j][i]=arr[j];
		}
	}
}

void main(){
	char arr[100];
	int i=0;
	char ch;
	printf("Enter String\n");
	while((ch=getchar())!='\n'){
		arr[i++]=ch;
	}

	printf("Enter row\n");
	int row;
	scanf("%d",&row);

	ZigZag(arr,row);
}
