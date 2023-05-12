#include<stdio.h>
#include<stdlib.h>

struct ListNode {
      int val;
      struct ListNode *next;
};

 
struct ListNode* list3=NULL;
struct ListNode* temp=NULL;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
      if(list1==NULL&&list2==NULL){
      		  return list3;
      }

      struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
      if(list3==NULL){
	        list3=node;
        	temp=node;
      }else{
	        temp->next=node;
		temp=temp->next;
      }
  
      if(list1!=NULL&&list1->val<list2->val){
       		temp->val=list1->val;
		struct ListNode* t1=list3;
		if(list1->next!=NULL){
        		return mergeTwoLists(list1->next,list2);
		}else{
        		temp->next=list2;	
		}
      }else if(list2!=NULL&&list1->val>list2->val){
	        temp->val=list2->val;
		if(list2->next!=NULL){
  	        	return mergeTwoLists(list1,list2->next);
		}else{
        		temp->next=list1;	
        	}
            
      }
 	 return list3;     
}


struct ListNode* list1=NULL;
void addNode(){
	struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
	printf("Enter val\n");
	scanf("%d",&node->val);
	if(list1==NULL){
		list1=node;
	}else{
		struct ListNode* list=list1;
		while(list->next!=NULL){
			list=list->next;
		}
		list->next=node;
	}

}

struct ListNode* list2=NULL;
void addNode2(){
	struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
	printf("Enter val\n");
	scanf("%d",&node->val);
	if(list2==NULL){
		list2=node;
	}else{
		struct ListNode* list=list2;
		while(list->next!=NULL){
			list=list->next;
		}
		list->next=node;
	}

}

void printnode(){

	struct ListNode* list=list1;
	while(list!=NULL){
		printf("%d-->",list->val);
		list=list->next;
	}
	printf("\n");
}

void printnode1(){

	struct ListNode* list=list2;
	while(list!=NULL){
		printf("%d-->",list->val);
		list=list->next;
	}
	printf("\n");
}

void printnode3(){

	struct ListNode* list=list3;
	while(list!=NULL){
		printf("%d-->",list->val);
		list=list->next;
	}
	printf("\n");
};

void main(){
	printf("no of 1st nodes\n");
	int size;
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		addNode();
	}

	printf("no of 2nd nodes\n");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		addNode2();
	}

	printnode();
	printnode1();
	mergeTwoLists(list1,list2);
	printnode3();

}
