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
void countsize(){
    int c=0;
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    printf("%d",c);
}
int main(){
    int n,i;
    for(i=0;i<=50;i++){
        printf("Enter values (-1 to exit): ");
        scanf("%d",&n);
        if(n<=-1){
            break;
        }
        else{
            createlst(n);
        }}
    countsize();
}
