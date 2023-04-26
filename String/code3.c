#include<stdio.h>
//pratik  praat
int len(char* str){
	int i=0;
	int k=0;
	int count=0;
	while(str[i]!='\0'){
		int cnt=0;
		int j=k;
		while(j<=i){
			if(str[i]==str[j] && i!=j){
				k=j+1;
				break;
			}else{
				cnt++;
			}
			j++;
		}
		if(cnt>count){
			count=cnt;
		}
		i++;
	}

	return count;
}

void main(){
	char str[20];
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		str[i++]=ch;
	}
	int x=len(str);
	printf("len=%d\n",x);
}
