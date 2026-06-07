#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    struct node *top=NULL, *temp=NULL;

void push(int n){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Empty\n");
        exit(0);
    }
    printf("Adding Section: %d\n",n);
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
        printf("Stack is Empty. Cannot pop\n");
        exit(0);
    }
    else{
        printf("Removing Section: %d\n",top->data);
        top=top->next;
    }
}

void display(){
    temp=top;
    if(temp==NULL){
        printf("Stack is Empty.\n");
        exit(0);
    }
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int ch,n;
    while (1)
    {
        printf("\nEnter choice: 0:EXIT/1:PUSH/2:POP/3:DISPLAY: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
            printf("Exit\n");
            exit(0);
            break;
        case 1: 
            printf("Enter data:");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    
}