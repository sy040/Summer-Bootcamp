#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
    struct node *top=NULL,*temp=NULL;

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
        return;
    }
    else{
        temp=top;
        printf("Deleted : %d\n",temp->data);
        top=top->next;
        free(temp);
    }
}

void display(){
    temp=top;
    if(temp==NULL){
        printf("Underflow");
        return;
    }
    printf("Stack elements: ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void topp(){
    if(top==NULL){
        printf("Underflow");
    }
    else{
        printf("Top: %d\n",top->data);
    }
}

int main(){
    int ch,n,val,i;
    while(1){
        printf("\nEnter choice 0:exit/1:push/2:pop/3:display/4:top: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
            printf("Exit");
            exit(0);
        case 1:
            printf("Enter range: ");
            scanf("%d",&n);
            printf("Enter value for stack:");
            for(i=0;i<n;i++){
                scanf("%d",&val);
                push(val);
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4: 
            topp();
            break;
        default:
            printf("Error");
            break;
        }
    }
    return 0;
}