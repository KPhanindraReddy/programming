// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

struct Node* create(struct Node* head,int val){
    struct Node* nn=(struct Node*)malloc(sizeof(struct Node));
      nn->data=val;
    nn->next=NULL;
if(head==NULL){
    return nn;
}
else{
    struct Node* temp=head;
    while(temp->next!=NULL){
       
        temp=temp->next;
    }
     temp->next=nn;
     return head;
}
}
void print(struct Node* head){
    struct Node* t=head;
    while(t!=NULL){
        printf("->%d",t->data);
        t=t->next;
    }
 
}


int main() {
 struct Node* head = NULL;
    int val;

    for (int i=0;i<4;i++) {
        scanf("%d",&val);
        head=create(head,val); 
       
    }
     print(head);

    return 0;
}
