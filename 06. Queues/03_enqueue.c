#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 10

int main() {
    int queue[MAX];
    int front = -1; int rear = -1;

    int value;
    printf("Enter the value to enqueue: \n");
    scanf("%d", &value);

    if(rear == MAX -1){
        printf("Stack overflow\n");
    }
    if(front == -1){
        front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueued", value);
    }
    return 0;
}