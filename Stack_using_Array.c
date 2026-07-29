#include<stdio.h>

int top=-1,max=10;
int stack[10];

int push(int x){
    if(top==max-1){
        printf("Stack is Full. Could not insert more data.\n");
    }else{
    top=top+1;
    stack[top]=x;
    }
}

int peek(){
    printf("The top element: %d\n",stack[top]);
}

int pop(){
    int data;
    if(top==-1){
        printf("Stack is Empty. No further elements can be popped.");
    }else{
        data=stack[top];
        top=top-1;
        printf("The element which is popped: %d\n",data);
    }
}

int display(){
     if(top==-1){
        printf("Stack is Empty.");
    }else{
        for(int i=top;i>=0;i--){
            printf("| %d |\n ---\n",stack[i]);
        }
    }
}

int main(){
int x,y=1,z;
    while(y){
        printf("1. Push\n");
        printf("2. pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&x);

        switch(x){
            case 1: 
            printf("Enter the element that you need to push: ");
            scanf("%d",&z);
            push(z);
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            y=0;
            break;

            default:
            printf("Invalid choice! Enter valid choice again.");
            break;
        }
    }
    return 0;
}
