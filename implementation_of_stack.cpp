#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

void push(int);
void pop();
void peek();
void display(); 

int stack[size],top=-1;

int main(){
    int value,ch;
    printf("**********menu**********\n");
    printf(" 1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
    do{
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("enter the value to be inserted\n");
            scanf("%d",&value);
            push(value);
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            case 5: exit(0);
            break;
            default: printf("invlid choice\n");
        }
    }while (ch!=5);
    return 0;
}
void push(int value){
    if(top==size-1)
    printf("stack is full\n");
    else{
        top++;
        stack[top]=value;
        printf("inserted suceessfully\n");
    }
}
void pop(){
    if(top==-1)
    printf("stack is empty\n");
    else{
        printf("deletion = %d\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1)
    printf("stack is empty\n");
    else{
        printf("top element are = %d\n",stack[top]);
    }
}
void display(){
    if(top==-1)
    printf("stack is empty\n");
    else{
        int i;
        printf("stack element are\n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
