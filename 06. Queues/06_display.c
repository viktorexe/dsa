#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX] = {10, 20, 30, 40};
    int front = 0, rear = 3;

    if(front == -1)
        printf("Queue Empty\n");
    else {
        printf("Queue: ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }

    return 0;
}
