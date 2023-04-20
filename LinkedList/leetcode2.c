#include<stdio.h>
#include<stdlib.h>

struct ListNode {
      int val;
      struct ListNode *next;
 };
 
 //struct ListNode head=NULL;
 struct ListNode* createNode(){
     struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
     node->next=NULL;
     printf("Enter val\n");
     scanf("%d",&node->val);
     return node;
}

 struct ListNode* createNode1(){
     struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
     node->next=NULL;
     node->val=0;
     return node;
}

 struct ListNode* l3=NULL;
 struct ListNode* l2=NULL;
 struct ListNode* l1=NULL;

void addnode(){
	struct ListNode* node=createNode();
	if(l1==NULL)
		l1=node;
	else{
		struct ListNode* temp=l1;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void addnode1(){
	struct ListNode* node=createNode();
	if(l2==NULL)
		l2=node;
	else{
		struct ListNode* temp=l2;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=node;
	}
}

void printnode(){
	struct ListNode *temp=l1;
	while(temp!=NULL){
		printf("%d-->",temp->val);
		temp=temp->next;
	}
	printf("\n\n");
}

void printnode1(){
	struct ListNode *temp=l2;
	while(temp!=NULL){
		printf("%d-->",temp->val);
		temp=temp->next;
	}
	printf("\n\n");
}

void printnode3(){
	struct ListNode *temp=l3;
	while(temp!=NULL){
		printf("%d-->",temp->val);
		temp=temp->next;
	}
	printf("\n\n");
}


struct ListNode* addNode (struct ListNode* l1,struct ListNode* l2){
	struct ListNode* temp=l1;
	struct ListNode* temp2=l2;
	struct ListNode* temp3=l3;
	int sum=0;
	while((temp!=NULL||temp2!=NULL)||sum>0){
		struct ListNode* node=createNode1();
	        if(l3==NULL){
			l3=node;
			temp3=l3;
		}else{
			temp3->next=node;
			temp3=temp3->next;
		}

		if(temp!=NULL&&temp2==NULL){
			sum=sum+temp->val;
			temp=temp->next;
		}else if(temp==NULL&&temp2!=NULL){
			sum=sum+temp2->val;
			temp2=temp2->next;
		}else if(temp==NULL&&temp2==NULL&&sum>0){
			temp3->val=sum%10;
			
		}else{
			sum=sum+temp->val+temp2->val;
			temp=temp->next;
			temp2=temp2->next;
		}

		temp3->val=sum%10;
		sum=sum/10;
	}
}
void main(){
	
	printf("Add first list\n");
	
	for(int i=0;i<1;i++){
		addnode();
	}


	printf("Add second list\n");
	
	for(int i=0;i<1;i++){
		addnode1();
	}

	printnode();
	printnode1();

	addNode(l1,l2);
	printnode3();	
}
