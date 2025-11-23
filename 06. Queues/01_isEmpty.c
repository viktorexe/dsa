#include <stdio.h>
#include <string.h>
# define MAX 10

int main() {
    int queue[MAX];
    int front = -1; int rear = -1;
    if(front == -1){
        printf("Queue empty");
    }
    else{
        printf("Queue not empty");
    }
    return 0;
}