#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX] = {10, 20, 30};
    int front = 0, rear = 2;

    if(front == -1)
        printf("Queue Empty\n");
    else
        printf("Front element: %d\n", queue[front]);

    return 0;
}
