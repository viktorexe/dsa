#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX] = {10, 20, 30};
    int front = 0, rear = 2;

    if(front == -1)
        printf("Queue Underflow\n");

    else {
        int deleted = queue[front];
        front++;

        if(front > rear){  // queue empty ho gayi
            front = rear = -1;
        }
        printf("%d dequeued\n", deleted);
    }

    return 0;
}
