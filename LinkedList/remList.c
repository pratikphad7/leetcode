#include<stdio.h>
#include<stdlib.h>

struct nodes{
	int val;
	struct nodes *next;
};

int i=1;
struct nodes* createnode(){
	struct nodes* node=(struct nodes*)malloc(sizeof(struct nodes*));
	node->val=i++;
	return node;
}
struct nodes* head=NULL;
void addnode(){
	struct nodes* node=createnode();
	if(head==NULL){
		head=node;
		node->next=NULL;
	}else{
		struct nodes* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
		node->next=NULL;
	}
	printf("in add\n");
}
// 0 1 2 3
void remnode(int n){
	struct ListNode* temp=head;
	struct ListNode* temp1=head;
	int cnt=0;
	while(temp->next!=NULL){
		temp=temp->next;
		cnt++;
	}
	if(head->next==NULL&&n==0){
		free(head);
		head=NULL;
	}else if(n==0){
		int i=1;
		
		while(i!=(cnt-n)){
			temp1=temp1->next;
			i++;
		}
		temp1->next=NULL;
		free(temp);
	}else{
		int i=1;
		temp1=head;
		while(i<(cnt-n)){
			temp1=temp1->next;
			i++;
		}
		if(temp1==head){
			head=head->next;
		}else{
			temp1->next=temp1->next->next;
		}
	}
}

void printnode(){

		struct nodes* temp=head;

		while(temp!=NULL){
			printf("%d-->",temp->val);
			temp=temp->next;
		}
		printf("\n");
}

void main(){
	addnode();
	addnode();
	addnode();
	addnode();
	addnode();
	int n;
	printf("Enter n\n");
	scanf("%d",&n);
	printnode();
	remnode(n);
	printnode();
}
