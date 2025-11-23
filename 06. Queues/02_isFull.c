# include <stdio.h>
# include <string.h>
# define MAX 10

int main() {
    int queue[MAX];
    int front = 0; int rear = 9;
    if(rear == MAX - 1){
        printf("Queue full");
    }
    else{
        printf("Queue not full");
    }
    return 0;
}