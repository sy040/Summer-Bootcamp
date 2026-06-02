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

void delete(int pos){
    if(pos<0){
        printf("-1");
        exit(0);
    }
    else if(pos==1){
        temp=head;
        head=NULL;
        free(head);
    }
    else{
        struct node *prev=NULL;
        temp=head;
        int i=1;    
        
        while(i<=pos-1 && temp->next!=head){
            prev=temp;
            temp=temp->next;
            i++;
        }

        prev->next=temp->next;
        printf("\nDelete %d from list",temp->data);
        free(temp);
    }
}

void display(){
    temp=head;
    printf("\nOld list: ");
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}

void revdisplay(){
    temp=head;
    printf("\nNew list: ");
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}
int main(){
    int r,i;
    int n;
    printf("Enter range:");
    scanf("%d",&r);

    for(i=0;i<r;i++){
        printf("Enter value: ");
        scanf("%d",&n);
        createlst(n);
    }
    int pos;
    printf("Enter Position:");
    scanf("%d",&pos);
    display();
    delete(pos);
    revdisplay();
}