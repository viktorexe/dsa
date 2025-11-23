#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 10

int main() {
    int queue[MAX];
        int front = -1; 
        int rear = -1;

        int value;
        printf("Enter value: \n"); scanf("%d", &value);
        if(front == (front + 1) % MAX){
            printf("Queue full\n");
            return 0;
        }
        if(front == - 1){
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("");
    return 0;
}