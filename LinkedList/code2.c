#include<stdio.h>
#include<stdlib.h>

struct ListNode {
      int val;
      struct ListNode *next;
};
int i=1;
struct ListNode* l1=NULL;
struct ListNode* l2=NULL;
struct ListNode* l3=NULL;
int flag=0;

struct ListNode* createnode(){
	struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
	newnode->val=9;
	i++;
	newnode->next=NULL;

	return newnode;
}

void addnode(){
	struct ListNode* newnode=createnode();
	if(flag==0){
		if(l1==NULL)
			l1=newnode;
		else{
			struct ListNode* head=l1;
			while(head->next!=NULL){
				head=head->next;
			}
			head->next=newnode;
		}
	}else{
		if(l2==NULL)
			l2=newnode;
		else{
			struct ListNode* head=l2;
			while(head->next!=NULL){
				head=head->next;
			}
			head->next=newnode;
		}
	}
}
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* temp1=l1;
    struct ListNode* temp2=l2;
    struct ListNode* head2=NULL;
    struct ListNode* sum=NULL;
    int nxt=0;

    while(temp1!=NULL||temp2!=NULL){
        int add=temp1->val+temp2->val;
        sum=(struct ListNode*)malloc(sizeof(struct ListNode));

        if(l3==NULL){
            l3=sum;
            head2=sum;
        }else{
            head2->next=sum;
            head2=sum;
        }

        sum->val=(nxt+add)%10;
	printf("add=%d\n",nxt+add);
	printf("sum=%d\n\n",sum->val);

        if((nxt+add)>9){
		if(nxt+add==10)
			nxt=1;
		else{
			nxt=0;
            		nxt=add/10;
		}
        }else
		nxt=0;

        if(temp1->next==NULL&&temp2->next==NULL){
            temp1=temp1->next;
            temp2=temp2->next;
        }else{
            
		if(temp1->next!=NULL){
                	temp1=temp1->next;
            	}else{
        	        temp1->val=0;
            	}
            
		if(temp2->next!=NULL){
                	temp2=temp2->next;
          	  }else{
                	temp2->val=0;
            	}
        }
        
    }
    if(nxt>0){
    	sum=(struct ListNode*)malloc(sizeof(struct ListNode));
	sum->val=nxt;
	sum->next=NULL;
	head2->next=sum;
    }

    temp1=NULL;
    temp2=NULL;
    while(l3!=NULL){
        temp1=l3->next;
        l3->next=temp2;
        temp2=l3;
        l3=temp1;
    }
    l3=temp2;
    return l3;
}

void printnode(){

    struct ListNode* temp1=NULL;
    if(flag==0)
	    temp1=l1;
    if(flag==1)
	    temp1=l2;
    
    if(flag==2)
	    temp1=l3;

    while(temp1!=NULL){
	printf("|%d| ",temp1->val);
    	temp1=temp1->next;	
    }
    printf("\n");
}

void main(){
	flag=0;
	for(int i=0;i<6;i++)
		addnode();
	
	printnode();

	flag=1;
	for(int i=0;i<3;i++)
		addnode();
	
	printnode();
	flag=2;
	addTwoNumbers(l1,l2);
	printnode();
}
