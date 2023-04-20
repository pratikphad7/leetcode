#include<stdio.h>
#include<stdlib.h>

struct listNode{
	int val;
	struct listNode* next;
};
struct listNode* Head1=NULL;
struct listNode* Head=NULL;
struct listNode* Head2=NULL;
int flag=0;
int cnt=0;
struct listNode* createNode(){
	struct listNode* Node=(struct listNode*)malloc(sizeof(struct listNode));
	printf("Enter Value\n");
	scanf("%d",&Node->val);
	Node->next=NULL;
	return Node;
}

void addNode(){
	struct listNode* Node=createNode();
	if(Head==NULL&&flag==0){
		Head=Node;
		cnt++;
	}else if(flag==0){
		struct listNode* temp=Head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=Node;
		cnt++;
	}else if(Head1==NULL){
		Head1=Node;
	}else{
		struct listNode* temp=Head1;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=Node;
	}

}

void sumNode(){
	struct listNode* Node=createNode();
	if(Head==NULL){
		Head=Node;
	}else{
		struct listNode* temp=Head2;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=Node;
	}

	int sum=Node->val

}

void main(){
	addNode();
	
}
