#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX];
    int front = 0;
    int rear = 9;

    if(front == (rear + 1) % MAX){
        printf("Full\n");
    }
    else{
        printf("Empty\n");
    }


    return 0;
}
