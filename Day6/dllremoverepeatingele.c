#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
    struct node *head=NULL, *tail=NULL,*temp=NULL;

void createlst(int n){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Empty");
        exit(0);
    }
    ptr->prev=NULL;
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        tail=head=ptr;
    }
    else{
        head->prev=ptr;
        ptr->next=head;
        head=ptr;
    }
}   


void display(){
    temp=tail;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}
int main(){
    int n,i,val;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value");
        scanf("%d",&val);
        createlst(val);
    }
    display();
}