#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL,*temp=NULL;
void createlst(int d)
{
    struct node *ptr= (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    int num = d;
    ptr->data = num;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = temp = ptr;
    }
    else
    {
        temp->next = ptr;
        temp = ptr;
    }
}
int countll()
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)    
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void deletek(int k,int count){
    temp=head;  
    struct node *prev=NULL;
    struct node *todel=NULL;
    
    int i=1;
    while(i<count-1 && temp!=NULL){     
        // prev=temp;
        if(i%k==0){

            todel=temp;
            
            prev->next=temp->next;
            temp=temp->next;
            
            free(todel);
        }
        else{
            prev=temp;
            temp=temp->next;
        }
        i++;
    }
}
void display(){
    printf("New list: ");
    temp=head;
    while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,i,d,c,k;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&d);
        createlst(d);
    }
    c=countll();

    printf("Kth node to be deleted: ");
    scanf("%d",&k);

    deletek(k,c);

    display();
}