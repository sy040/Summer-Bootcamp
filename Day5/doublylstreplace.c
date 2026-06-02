#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
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
    ptr->prev=NULL;
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
void replace(int indx,int target){
    int count=0;
    temp=head;
    while(temp!=NULL){
        if(count==indx){
            temp->data=target;
            break;
        }
        temp=temp->next;
        count++;
    }
}
void display(){
    temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}
int main(){
    int n;
    printf("Enter range: ");
    scanf("%d",&n);
    int data,i;
    for(i=0;i<n;i++){
        scanf("%d",&data);
        createlst(data);
    }
    int pos,tv;
    printf("Enter position and targetvalue: ");
    scanf("%d%d",&pos,&tv);
    replace(pos,tv);
    display();

}