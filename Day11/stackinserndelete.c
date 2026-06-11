#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL, *temp=NULL;
void push(int n){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Empty");
        exit(0);
    }
    ptr->data=n;
    ptr->next=NULL;
    if(top==NULL){
        top=ptr;
    }
    else{
        ptr->next=top;
        top=ptr;
    }
}

void pop(){

    if(top==NULL){
        printf("Underflow");
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}

void display(){
    temp=top;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void topp(){
    if(top==NULL){
        printf("Underflow");
    }
    else{
        printf("Top element is %d.\n",top->data);
    }
}

int main(){
    int n,val,i;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&val);
        push(val);
    }
    display();
    topp();
    pop();
    display();
    topp();
}