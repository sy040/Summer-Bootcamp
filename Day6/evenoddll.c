#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    struct node *head=NULL, *temp=NULL;

void createlst(int n){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Empty");
        exit(0);
    }
    ptr->data=n;
    ptr->next=NULL;
    if(head==NULL){
        temp=head=ptr;
    }
    else{
        temp->next=ptr;
        temp=ptr;
    }
}
void newll(){
    temp=head;
    int n;
    n=temp->data;
    if(n%2==0){
        createlst(n);
    }
    else{
        
    }
}