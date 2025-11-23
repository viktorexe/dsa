#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX];
    int front = -1, rear = -1;

    if(front == -1)
        printf("Queue is Empty\n");
    else
        printf("Queue is NOT Empty\n");

    return 0;
}
