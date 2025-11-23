#include <stdio.h>

#define MAX 10

int main() {
    int stack[MAX] = 10;
    int top = -1;
    int value;

    printf("Enter value to push: ");
    scanf("%d", &value);

    // check overflow
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    } 
    else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }

    return 0;
}
