#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 100
char stack[Max];
int top=-1;
void push(char ch){
    if(top==Max-1){
        printf("Stack Overflow\n");
        exit(0);
    }
    top++;
    stack[top]=ch;
}

void pop(){
    while(top!=-1){
        printf("%c",stack[top]);
        top--;
    }
}
int main(){
    char str[100];
    int i;
    printf("Enter string: ");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++){
        if(str[i]==' '){
            pop();
            printf(" ");
        }
        else{
            push(str[i]);
        }
    }
    pop();
}