#include <stdio.h>
int max = 100;
int queue[100];
int front = -1;
int rear = -1;

void insert(int item, int queue[]){
    if((rear+1)%max == front){
        printf("\nOVERFLOW");
        return;
    }else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    } else if(rear == max-1 && front != 0){
        rear = 0;
    }else{
        rear = (rear+1)%max;
    }
    queue[rear] = item;
}

void delete() {
    if (front == -1 && rear == -1) {
        printf("\nUNDERFLOW! Queue is Empty.\n");
        return;
    }
    int data = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == max - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
    printf("Deleted element: %d", data);
}

void display(){
    int i;
    if(front == -1&& rear==-1){
        printf("\nCircular Queue is Empty!!!\n");
    }else{
        printf("\nCircular Queue Elements are : \n");
    }
    if(front <= rear){
        for(i = front;i<=rear;i++)
        printf("%d ", queue[i]);
    }else{
        for(i = front;i<max;i++)
        printf("%d ", queue[i]);
        for(i=0;i<=rear;i++)
        printf("%d ",queue[i]);
    }
}


int main() {
    int choice, val;

    while (1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                insert(val,queue);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
