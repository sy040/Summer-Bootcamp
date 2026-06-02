#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
    struct node *head=NULL, *tail=NULL;

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
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
    }
}
void display(){
    printf("Original form\n:");
    do{
        printf("%d ",head->data);
        head=head->next;
    }while(head!=NULL);
}

void revdisplay(){
    printf("\nReversed form\n:");
    do{
        printf("%d ",tail->data);
        tail=tail->prev;
    }while(tail!=NULL);
}

int main(){
    int n,i,d;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&d);
        createlst(d);
    }
    display();
    revdisplay();
}
