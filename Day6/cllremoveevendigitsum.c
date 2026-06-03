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
        temp->next=head;
    }
    else{
        temp->next=ptr;
        temp=ptr;
        temp->next=head;

    }
}

void removendisplay(){
    temp=head;
    int n,s;
    do{
        
        n=temp->data;
        s=0;
        while(n>0){
            s+=n%10;
            n=n/10;
        }
        if(s%2==0){
            temp=temp->next;
        }
        else{
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    while(temp!=head);
}
int main(){
    int r,i,val;
    printf("Enter range: ");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        printf("Enter value: ");
        scanf("%d",&val);
        createlst(val);
    }
    removendisplay();
}