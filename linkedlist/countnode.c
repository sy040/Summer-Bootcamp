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
        ptr->next=head;
        head=ptr;
        // temp=ptr;
    }
}
void count(){
    temp=head;
    int c=0;
    while (temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    printf("Count is %d",c);
}

int main(){
    int n,i,val;
    printf("Enter range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter values: ");
        scanf("%d",&val);
        createlst(val);
    }
    count();
}